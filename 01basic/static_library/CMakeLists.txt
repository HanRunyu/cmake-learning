cmake_minimum_required(VERSION 3.16)

project(static_library)

message(STATUS "PROJECT_BINARY_DIR is ${PROJECT_BINARY_DIR}")
message(STATUS "PROJECT_SOURCE_DIR is ${PROJECT_SOURCE_DIR}")

aux_source_directory(${PROJECT_SOURCE_DIR}/my_printf/src MY_PRINTF_SRC)

add_library(my_printf_lib STATIC ${MY_PRINTF_SRC})

aux_source_directory(${PROJECT_SOURCE_DIR}/main MAIN_SRC)

add_executable(static_library ${MAIN_SRC})

target_link_libraries(static_library PUBLIC my_printf_lib)

target_include_directories(static_library PUBLIC ${PROJECT_SOURCE_DIR}/my_printf/inc)