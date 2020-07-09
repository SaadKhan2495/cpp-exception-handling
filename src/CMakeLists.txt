cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/example)

project(example)
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/example.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})