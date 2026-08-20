// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef HIWIN_CONTROLLERS__RESET_FAULT_CONTROLLER_HPP_
#define HIWIN_CONTROLLERS__RESET_FAULT_CONTROLLER_HPP_

#include <memory>
#include <string>
#include <vector>
#include <mutex>
#include <unordered_map>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

#include "controller_interface/controller_interface.hpp"
#include "control_msgs/action/follow_joint_trajectory.hpp"

#include "hiwin_controllers/joint_state_parameters.hpp"
#include "hiwin_msgs/srv/reset_joint_fault.hpp"

namespace hiwin_controllers
{

using FollowJointTrajectory = control_msgs::action::FollowJointTrajectory;
using FollowJointTrajectoryClient = rclcpp_action::Client<FollowJointTrajectory>::SharedPtr;

class ResetFaultController : public controller_interface::ControllerInterface
{
public:
  controller_interface::InterfaceConfiguration command_interface_configuration() const final;

  controller_interface::InterfaceConfiguration state_interface_configuration() const final;

  CallbackReturn on_init() final;

  CallbackReturn on_configure(const rclcpp_lifecycle::State& previous_state) final;

  CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) final;

  CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) final;

  controller_interface::return_type update(const rclcpp::Time& time, const rclcpp::Duration& period) final;

private:
  void handle_reset(const std::shared_ptr<hiwin_msgs::srv::ResetJointFault::Request> request,
                    std::shared_ptr<hiwin_msgs::srv::ResetJointFault::Response> response);

  std::shared_ptr<joint_state_parameters::ParamListener> param_listener_;
  joint_state_parameters::Params params_;

  rclcpp::Service<hiwin_msgs::srv::ResetJointFault>::SharedPtr reset_srv_;
  FollowJointTrajectoryClient trajectory_client_;

  std::mutex reset_mutex_;
  std::unordered_map<std::string, int64_t> reset_deadline_ns_;
  int64_t reset_pulse_ns_{ 50'000'000 };  // 0.05s
  std::string traj_action_server_{ "/joint_trajectory_controller/follow_joint_trajectory" };
};

}  // namespace hiwin_controllers

#endif  // HIWIN_CONTROLLERS__RESET_FAULT_CONTROLLER_HPP_