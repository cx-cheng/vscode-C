cmake_minimum_required(VERSION 3.0.0)    # 指定cmake最小版本
project(project VERSION 0.1.0 LANGUAGES C)  # 指定项目名称


aux_source_directory(src SRC_SUB)    # 指定源文件目录
aux_source_directory(. SRC_CUR)
add_executable(project ${SRC_SUB} ${SRC_CUR}) # 指定程序入口
include_directories(include) # 指定头文件目录
