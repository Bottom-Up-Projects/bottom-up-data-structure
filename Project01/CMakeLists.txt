cmake_minimum_required(VERSION 3.21)

project(
    Project01
)

set(CMAKE_CXX_STANDARD 17)
set(LIBRARY_OUTPUT_NAME Project01)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/includes)
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)


set(HEADER_FILES 
    ${INCLUDE_DIR}/queue.h
    ${INCLUDE_DIR}/stack.h
)

set(SOURCE_FILES
    ${SOURCE_DIR}/queue.cc
    ${SOURCE_DIR}/stack.cc
)

add_library(
    ${LIBRARY_OUTPUT_NAME}
    ${HEADER_FILES}
    ${SOURCE_FILES}
)

target_include_directories(
    ${LIBRARY_OUTPUT_NAME}
    PUBLIC
    ${INCLUDE_DIR}
)

add_executable(
    main.out
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cc
)

target_link_libraries(main.out ${LIBRARY_OUTPUT_NAME})

