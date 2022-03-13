cmake_minimum_required(VERSION 3.16)

project(cmake_compiling_with_clang)

message(STATUS "PROJECT_BINARY_DIR is ${PROJECT_BINARY_DIR}")
message(STATUS "PROJECT_SOURCE_DIR is ${PROJECT_SOURCE_DIR}")

aux_source_directory(${PROJECT_SOURCE_DIR} MAIN_SRC)

add_executable(cmake_compiling_with_clang ${MAIN_SRC})