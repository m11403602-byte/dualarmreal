# [來源] 新建檔案（格式比照 small_arm_bringup/CMakeLists.txt）
cmake_minimum_required(VERSION 3.8)
project(small_arm_moveit_config)

find_package(ament_cmake REQUIRED)

install(
  DIRECTORY launch config
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
