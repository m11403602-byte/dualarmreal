// [來源] 新建檔案 — RViz Panel 外掛（等級 2 範例）
// 對接的 client: 等級 1 範例 dual_arm_topic_client（service 名見下方常數）
// 換成 domain 版下行程式時, 只需把 kClientNode 改成 "/trajectory_downlink_client"

#include "dual_arm_execute_panel/execute_panel.hpp"

#include <QVBoxLayout>
#include <QHBoxLayout>

#include <rviz_common/display_context.hpp>
#include <rviz_common/ros_integration/ros_node_abstraction_iface.hpp>
#include <pluginlib/class_list_macros.hpp>

namespace dual_arm_execute_panel
{

// ---- 對接設定（要換 client 改這裡）----
static const char * kClientNode = "/trajectory_downlink_client";
static const char * kPlanTopic  = "/display_planned_path";

ExecutePanel::ExecutePanel(QWidget * parent)
: rviz_common::Panel(parent)
{
  // ---- Qt 介面 ----
  btn_execute_ = new QPushButton(QString::fromUtf8("\u25B6 執行 (Topic)"));
  btn_cancel_  = new QPushButton(QString::fromUtf8("\u25A0 取消"));
  lbl_plan_    = new QLabel(QString::fromUtf8("最新規劃: (尚未捕捉 — 先在 RViz 按 Plan)"));
  lbl_status_  = new QLabel(QString::fromUtf8("狀態: 待命"));
  lbl_plan_->setWordWrap(true);
  lbl_status_->setWordWrap(true);

  auto * btn_row = new QHBoxLayout;
  btn_row->addWidget(btn_execute_);
  btn_row->addWidget(btn_cancel_);

  auto * layout = new QVBoxLayout;
  layout->addWidget(lbl_plan_);
  layout->addLayout(btn_row);
  layout->addWidget(lbl_status_);
  layout->addStretch();
  setLayout(layout);

  connect(btn_execute_, &QPushButton::clicked, this, &ExecutePanel::onExecuteClicked);
  connect(btn_cancel_,  &QPushButton::clicked, this, &ExecutePanel::onCancelClicked);

  // ROS 執行緒 → Qt 主執行緒（QueuedConnection 自動切換, 不可直接在 callback 改 UI）
  connect(this, &ExecutePanel::planInfoChanged, lbl_plan_,   &QLabel::setText,
          Qt::QueuedConnection);
  connect(this, &ExecutePanel::statusChanged,  lbl_status_, &QLabel::setText,
          Qt::QueuedConnection);
}

void ExecutePanel::onInitialize()
{
  // 取 RViz 內部的 ROS 節點（由 RViz 的 executor spin, 不用自己開 spin 執行緒）
  node_ = getDisplayContext()->getRosNodeAbstraction().lock()->get_raw_node();

  exec_client_ = node_->create_client<std_srvs::srv::Trigger>(
      std::string(kClientNode) + "/execute");
  cancel_client_ = node_->create_client<std_srvs::srv::Trigger>(
      std::string(kClientNode) + "/cancel");

  // 訂閱規劃結果, 只做顯示（拆分/發布是 client 的事）
  sub_plan_ = node_->create_subscription<moveit_msgs::msg::DisplayTrajectory>(
      kPlanTopic, 10,
      [this](moveit_msgs::msg::DisplayTrajectory::ConstSharedPtr msg) {
        if (msg->trajectory.empty()) {return;}
        const auto & jt = msg->trajectory[0].joint_trajectory;
        const double dur = jt.points.empty() ? 0.0 :
            rclcpp::Duration(jt.points.back().time_from_start).seconds();
        Q_EMIT planInfoChanged(
            QString::fromUtf8("最新規劃: %1 軸 / %2 點 / %3 秒")
            .arg(jt.joint_names.size()).arg(jt.points.size()).arg(dur, 0, 'f', 2));
      });
}

void ExecutePanel::onExecuteClicked() {call_trigger(true);}
void ExecutePanel::onCancelClicked()  {call_trigger(false);}

void ExecutePanel::call_trigger(bool is_execute)
{
  auto client = is_execute ? exec_client_ : cancel_client_;
  const QString name = is_execute ? QStringLiteral("execute") : QStringLiteral("cancel");

  if (!node_ || !client) {
    Q_EMIT statusChanged(QString::fromUtf8("狀態: ❌ 面板尚未初始化"));
    return;
  }
  if (!client->service_is_ready()) {
    Q_EMIT statusChanged(
        QString::fromUtf8("狀態: ❌ %1 服務未就緒 — client 節點沒開? (%2)")
        .arg(name, QString::fromUtf8(kClientNode)));
    return;
  }

  Q_EMIT statusChanged(QString::fromUtf8("狀態: 已送出 %1 ...").arg(name));
  auto req = std::make_shared<std_srvs::srv::Trigger::Request>();
  client->async_send_request(
      req,
      [this](rclcpp::Client<std_srvs::srv::Trigger>::SharedFuture future) {
        const auto res = future.get();
        Q_EMIT statusChanged(
            QString::fromUtf8("狀態: %1 %2")
            .arg(res->success ? QStringLiteral("✅") : QStringLiteral("❌"),
                 QString::fromStdString(res->message)));
      });
}

}  // namespace dual_arm_execute_panel

PLUGINLIB_EXPORT_CLASS(dual_arm_execute_panel::ExecutePanel, rviz_common::Panel)
