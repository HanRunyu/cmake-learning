cmake_minimum_required(VERSION 3.16)

project(hello_headers)

message(STATUS "PROJECT_BINARY_DIR is ${PROJECT_BINARY_DIR}")
message(STATUS "PROJECT_SOURCE_DIR is ${PROJECT_SOURCE_DIR}")

aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)

add_executable(hello_headers ${SRC_LIST})

target_include_directories(hello_headers PUBLIC ${PROJECT_SOURCE_DIR}/inc)