project(main)

message(STATUS "main project name : ${PROJECT_NAME}")
message(STATUS "main source dir : ${PROJECT_SOURCE_DIR}")

aux_source_directory(${PROJECT_SOURCE_DIR}/src MAIN_SRC)

add_executable(${PROJECT_NAME} ${MAIN_SRC})

set(FILE_AUTHOR "WillHan")

configure_file(${PROJECT_SOURCE_DIR}/inc/main.h.in ${PROJECT_BINARY_DIR}/main.h)

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_BINARY_DIR})

target_link_libraries(${PROJECT_NAME} PRIVATE my_printf)