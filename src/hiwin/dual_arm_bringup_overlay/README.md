# 雙臂 bringup 套件（big / small）— 同 domain + namespace 版

三臺機器**同一個 ROS_DOMAIN_ID**、同網段。手臂端用 namespace 把節點/topic/action 推進
`/big_arm`、`/small_arm`，主機 move_group 直接連手臂的 native action，**不需要 domain_bridge、不需要轉接器**。

| 套件 | 手臂 | 啟動傳 namespace | 傳 tf_prefix | 傳 ra_type |
|------|------|------------------|--------------|------------|
| `big_arm_bringup`   | A 臂 RA610-1476 | `big_arm`   | `big_`   | `ra610_1476` |
| `small_arm_bringup` | B 臂 RA605-710  | `small_arm` | `small_` | `ra605_710`  |

> namespace 管 node/topic/action 名稱；tf_prefix 管「關節名」（合併 /joint_states 時不撞名）。兩者都要。

## 部署（每臺手臂只放自己那個套件，疊在 ws_ros2 上）
```bash
mkdir -p ~/ws_dual/src
# A 機器放 big_arm_bringup + big_arm_moveit_config／B 機器放 small 那兩包 到 ~/ws_dual/src/
source ~/ws_ros2/install/setup.bash
cd ~/ws_dual && colcon build
source install/setup.bash
```

## 啟動（三臺同 domain，例如 0）
```bash
sudo /etc/init.d/ethercat start
export ROS_DOMAIN_ID=0            # ★ 三臺一致，不再用 20/30

# A 臂
ros2 launch big_arm_bringup ra6_control.launch.py \
    ra_type:=ra610_1476 cabinet:=ecat tf_prefix:=big_ namespace:=big_arm launch_rviz:=false

# B 臂
ros2 launch small_arm_bringup ra6_control.launch.py \
    ra_type:=ra605_710 cabinet:=ecat tf_prefix:=small_ namespace:=small_arm launch_rviz:=false
```

## ★ namespace 後，服務/話題名稱都帶前綴了
```bash
# joint_states：/big_arm/joint_states（merger 已經訂這個，不用改）
# action：     /big_arm/joint_trajectory_controller/follow_joint_trajectory
#             （對應改好的 moveit_controllers.yaml）

# 安全繼電器（IO）
ros2 service call /big_arm/gpio_controller/set_io hiwin_msgs/srv/SetIO \
    "{io_group: system, interface_name: reset_safety_rly, value: 1.0}"
# 驅動器警報重置（joint_name 仍帶 tf_prefix）
ros2 service call /big_arm/reset_fault_controller/reset_fault \
    hiwin_msgs/srv/ResetJointFault "{joint_name: 'big_joint_1'}"
```

## 驗證（手臂機，同 domain）
```bash
ros2 node list   | grep big_arm     # /big_arm/controller_manager, /big_arm/robot_state_publisher ...
ros2 topic echo  /big_arm/joint_states --once          # big_joint_1..6
ros2 action info /big_arm/joint_trajectory_controller/follow_joint_trajectory -t
#   Action servers: 1   ← 手臂真的開出 server（不再是 0）
ros2 topic list  | grep robot_description               # 應有 /big_arm/robot_description
```
若控制器卡 inactive：多半是 `/big_arm/robot_description` 沒對上（rsp 與 control_node 的相對名）。

## 主機端（dom 與手臂同，例如 0）— 大幅簡化
```bash
export ROS_DOMAIN_ID=0
ros2 launch hiwin_dual_arm brain.launch.py     # MoveIt + RViz（雙臂協調規劃）
ros2 run <你的套件> joint_state_merger         # 重蓋時戳，照舊（訂 /big_arm,/small_arm/joint_states）
# ★ 不用 domain_bridge、不用 traj_action_to_topic 轉接器
```
記得用改好的 `moveit_controllers.yaml`（指到 /big_arm,/small_arm /joint_trajectory_controller）。

## ★ 新增：各臂自己的單臂 MoveIt（手臂機上跑）

每臂機器可獨立跑自己的 MoveIt（單臂規劃 + 執行自己那臂），與主機端雙臂協調互不相干。

```bash
# A 臂機 — 一鍵啟動 (控制層 + MoveIt + RViz; 預設參數已是 ra610_1476/ecat/big_/big_arm)
ros2 launch big_arm_moveit_config ra6_moveit.launch.py

# B 臂機 — 一鍵啟動 (預設 ra605_710/ecat/small_/small_arm)
ros2 launch small_arm_moveit_config ra6_moveit.launch.py

```
（結構比照官方 ra6_moveit.launch.py：全節點一檔 + OnProcessExit 事件排序 —
move_group 等 controller spawner 真正完成才啟動、RViz 等 joint_state_broadcaster 完成。
注意：本檔內含控制層節點（與 ra6_control.launch.py 相同的 namespace 版），兩檔擇一啟動即可；
若改控制層邏輯，兩檔要同步（檔內有 [SYNC] 標記）。）

每臂拆成兩個套件（控制 / MoveIt 分離，比照 hiwin_driver vs hiwin_ra6_moveit_config 慣例）：

| 套件 | 內容 |
|------|------|
| `big_arm_bringup` / `small_arm_bringup` | 控制包：`ra6_control.launch.py`（[REVISE] 已加臂專屬預設值 ra_type/tf_prefix/namespace，不帶參數也能正確啟動）+ `ra6_controllers.yaml`（原樣不變）|
| `big_arm_moveit_config` / `small_arm_moveit_config` | ★MoveIt 包（完全自足）：`ra6_moveit.launch.py` + 前綴版 SRDF/joint_limits + moveit_controllers.yaml + ra6_controllers.yaml 複本（[SYNC] 與控制包同步）|

MoveIt 包內的檔案（與官方 hiwin_ra6_moveit_config 的差異）：

| 檔案 | 內容 |
|------|------|
| `launch/ra6_moveit.launch.py` | 一鍵啟動 (官方風格全節點一檔): rsp + ros2_control + spawners + move_group + RViz, OnProcessExit 事件排序, 全進 namespace |
| `config/ra6_prefixed.srdf` | 官方 ra6.srdf 的前綴版（big_/small_joint_*、big_/small_link_* — 官方靜態檔無前綴，配 tf_prefix 的 URDF 對不上） |
| `config/joint_limits_prefixed.yaml` | 官方 joint_limits 的前綴版（速度值沿用原廠） |
| `config/moveit_controllers.yaml` | 對齊本套件 ra6_controllers.yaml：控制器相對名 `joint_trajectory_controller` + joints big_/small_joint_1~6 → action 解析為 /big_arm(/small_arm)/joint_trajectory_controller/follow_joint_trajectory |

link 前綴：已對照 hiwin_description/urdf/ra_macro.xacro 確認 —
`${tf_prefix}base_link / link_1~6 / tool0 / joint_1~6` 全帶前綴、`world` 無前綴，
本包的前綴版 SRDF 與之一致，無需修改。

## 改了 launch 的哪裡（相對前一版）
1. 每個 Node 加 `namespace=`（推進 /big_arm）。
2. spawner 的 `-c /controller_manager` → 相對 `controller_manager`。
3. control_node 的 `~/robot_description` remap 目標 `/robot_description` → 相對 `robot_description`。
4. 新增 `namespace` 啟動參數。
（tf_prefix 接線、controllers 指向本套件，與前一版相同。）
