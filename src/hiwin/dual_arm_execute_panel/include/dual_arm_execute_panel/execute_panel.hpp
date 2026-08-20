// [來源] 新建檔案 — RViz Panel 外掛（等級 2 範例）
// 停靠在 RViz 視窗內的雙臂執行面板:
//   [▶ 執行 (Topic)] → 呼叫 client 的 ~/execute service
//   [■ 取消]         → 呼叫 client 的 ~/cancel service
//   並訂閱 /display_planned_path 顯示「最新規劃 N 點 / X 秒」
// 引擎(拆分/發布/完成監看)在 dual_arm_topic_client, Panel 不碰軌跡邏輯。
#ifndef DUAL_ARM_EXECUTE_PANEL__EXECUTE_PANEL_HPP_
#define DUAL_ARM_EXECUTE_PANEL__EXECUTE_PANEL_HPP_

#include <rviz_common/panel.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_srvs/srv/trigger.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>

#include <QPushButton>
#include <QLabel>

#include <string>

namespace dual_arm_execute_panel
{

class ExecutePanel : public rviz_common::Panel
{
  Q_OBJECT

public:
  explicit ExecutePanel(QWidget * parent = nullptr);

  // RViz 載入面板後呼叫 — 在這裡才拿得到 RViz 內部的 ROS 節點
  void onInitialize() override;

Q_SIGNALS:
  // ROS callback 在背景執行緒跑, Qt UI 只能在主執行緒改
  // → 用 signal + Qt::QueuedConnection 自動跨執行緒
  void planInfoChanged(const QString & text);
  void statusChanged(const QString & text);

private Q_SLOTS:
  void onExecuteClicked();
  void onCancelClicked();

private:
  void call_trigger(bool is_execute);

  rclcpp::Node::SharedPtr node_;
  rclcpp::Client<std_srvs::srv::Trigger>::SharedPtr exec_client_;
  rclcpp::Client<std_srvs::srv::Trigger>::SharedPtr cancel_client_;
  rclcpp::Subscription<moveit_msgs::msg::DisplayTrajectory>::SharedPtr sub_plan_;

  QPushButton * btn_execute_{nullptr};
  QPushButton * btn_cancel_{nullptr};
  QLabel * lbl_plan_{nullptr};
  QLabel * lbl_status_{nullptr};
};

}  // namespace dual_arm_execute_panel

#endif  // DUAL_ARM_EXECUTE_PANEL__EXECUTE_PANEL_HPP_
