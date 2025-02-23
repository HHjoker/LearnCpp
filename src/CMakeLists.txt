cmake_minimum_required(VERSION 3.16.3)

project(hhapp)

set(SRC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/start_application.cpp)

add_library(srclib SHARED ${SRC_PATH})