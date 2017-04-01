cmake_minimum_required(VERSION 2.8)
project(blofeld_tests)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runUnitTests
        FileReaderTests/Test1.cpp)

target_link_libraries(runUnitTests gtest gtest_main)

# target_link_libraries(runUnitTests src)