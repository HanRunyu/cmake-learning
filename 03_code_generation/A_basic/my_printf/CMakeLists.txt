project(my_printf)

message(STATUS "my_printf project name : ${PROJECT_NAME}")
message(STATUS "my_printf source dir : ${PROJECT_SOURCE_DIR}")

aux_source_directory(${PROJECT_SOURCE_DIR}/src LIB_SRC)

add_library(${PROJECT_NAME} SHARED ${LIB_SRC})

target_include_directories(${PROJECT_NAME} INTERFACE ${PROJECT_SOURCE_DIR}/inc)
