cmake_minimum_required(VERSION 3.10)
project(MyStackUnitTesting)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(MyStackTests MyTests.cpp)

target_link_libraries(MyStackTests ${GTEST_LIBRARIES} pthread)