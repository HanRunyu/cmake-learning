cmake_minimum_required(VERSION 3.16)

add_compile_options(-Wall -Werror)

if (NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message(STATUS "Setting build type to 'RelWithDebInfo' as none was specified.")
    set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "choose the build type." FORCE)
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Release" "Debug" "RelWithDebInfo" "MinSizeRel")
endif()

project(shared_library)

message(STATUS "PROJECT_BINARY_DIR is ${PROJECT_BINARY_DIR}")
message(STATUS "PROJECT_SOURCE_DIR is ${PROJECT_SOURCE_DIR}")

aux_source_directory(${PROJECT_SOURCE_DIR}/my_printf/src MY_PRINTF_SRC)

add_library(my_printf_lib SHARED ${MY_PRINTF_SRC})

aux_source_directory(${PROJECT_SOURCE_DIR}/main MAIN_SRC)

add_executable(shared_library ${MAIN_SRC})


set(CMAKE_MODULE_PATH "/usr/lib/")
message(STATUS "CMAKE_MODULE_PATH is ${CMAKE_MODULE_PATH}")
find_package(OpenCV)
if(OpenCV_FOUND)
    target_link_libraries(shared_library PUBLIC ${OpenCV_LIBRARY})
    target_include_directories(shared_library PUBLIC ${OpenCV_INCLUDE_DIR})
else()
    message(FATAL_ERROR "OpenCV not found")
endif()

target_link_libraries(shared_library PUBLIC my_printf_lib)

target_include_directories(shared_library
    PUBLIC ${PROJECT_SOURCE_DIR}/my_printf/inc)