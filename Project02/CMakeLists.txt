cmake_minimum_required(VERSION 3.21)

project(
    Project02
)

set(CMAKE_CXX_STANDARD 17)
set(LIBRARY_OUTPUT_NAME Project02)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/includes)
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

set(HEADER_FILES 
    ${INCLUDE_DIR}/deque.h
    ${INCLUDE_DIR}/iterator.h
    ${INCLUDE_DIR}/vector.h
)

set(SOURCE_FILES
    ${SOURCE_DIR}/deque.cc
    ${SOURCE_DIR}/iterator.cc
    ${SOURCE_DIR}/vector.cc
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
