cmake_minimum_required(VERSION 3.16.3)

project(add)

set(SRC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/add.cpp)

add_library(addlib SHARED ${SRC_PATH})