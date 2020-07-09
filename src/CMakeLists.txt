cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/exception_handling)

project(simple-example)
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/SimpleExample.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})