cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/exception_handling)

project(simple-example)
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/SimpleExample.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

project(implicit-conversion)
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/ImplicitConversion.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

project(transfer-control)
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/TransferControl.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

project(exception-not-caught)
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/ExceptionNotCaught.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

project(noexcept)
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/Noexcept.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

project(try-catch-nested)
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/TryCatchNested.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})