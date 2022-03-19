project(main)

message(STATUS "main project name : ${PROJECT_NAME}")
message(STATUS "main source dir : ${PROJECT_SOURCE_DIR}")

aux_source_directory(${PROJECT_SOURCE_DIR} MAIN_SRC)

add_executable(${PROJECT_NAME} ${MAIN_SRC})

target_link_libraries(${PROJECT_NAME} PRIVATE my_printf)