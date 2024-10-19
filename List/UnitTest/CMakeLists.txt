cmake_minimum_required(VERSION 3.10)
project(MyListUnitTesting)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(MyListTests MyTests.cpp)

target_link_libraries(MyListTests ${GTEST_LIBRARIES} pthread)