cmake_minimum_required(VERSION 2.8)
project(blofeld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(HEADER_FILES
        )

set(SOURCE_FILES
        main.cpp
        )

add_library(blofeld STATIC ${SOURCE_FILES} ${HEADER_FILES})