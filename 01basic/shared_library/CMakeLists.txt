cmake_minimum_required(VERSION 3.16)

project(shared_library)

message(STATUS "PROJECT_BINARY_DIR is ${PROJECT_BINARY_DIR}")
message(STATUS "PROJECT_SOURCE_DIR is ${PROJECT_SOURCE_DIR}")

aux_source_directory(${PROJECT_SOURCE_DIR}/my_printf/src MY_PRINTF_SRC)

add_library(my_printf_lib SHARED ${MY_PRINTF_SRC})

aux_source_directory(${PROJECT_SOURCE_DIR}/main MAIN_SRC)

add_executable(shared_library ${MAIN_SRC})

target_link_libraries(shared_library PUBLIC my_printf_lib)

target_include_directories(shared_library PUBLIC ${PROJECT_SOURCE_DIR}/my_printf/inc)