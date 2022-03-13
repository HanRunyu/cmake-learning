cmake_minimum_required(VERSION 3.16)

add_compile_options(-Wall -Werror)

if (NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message(STATUS "Setting build type to 'RelWithDebInfo' as none was specified.")
    set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "choose the build type." FORCE)
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Release" "Debug" "RelWithDebInfo" "MinSizeRel")
endif()

project(sub_project)

add_subdirectory(main)
add_subdirectory(my_printf)
