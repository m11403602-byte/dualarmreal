# [來源] 新建檔案（標準 ament_cmake 安裝套件格式）
cmake_minimum_required(VERSION 3.8)
project(small_arm_bringup)

find_package(ament_cmake REQUIRED)

install(
  DIRECTORY launch config
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
