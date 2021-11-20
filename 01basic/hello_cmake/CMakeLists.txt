
cmake_minimum_required(VERSION 3.16)

project(helloc_cmake)

aux_source_directory(. SRC_LIST)

add_executable(helloc_cmake ${SRC_LIST})