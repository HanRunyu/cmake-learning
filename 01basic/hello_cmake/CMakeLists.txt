
cmake_minimum_required(VERSION 3.16)

project(helloc_cmake)

message(STATUS "PROJECT_BINARY_DIR is ${PROJECT_BINARY_DIR}")
message(STATUS "PROJECT_SOURCE_DIR is ${PROJECT_SOURCE_DIR}")

aux_source_directory(${PROJECT_SOURCE_DIR} SRC_LIST)

add_executable(helloc_cmake ${SRC_LIST})