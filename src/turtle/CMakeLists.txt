cmake_minimum_required(VERSION 3.16.3)

project(turtle)

set(TURTLE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Painter.cpp ${CMAKE_CURRENT_SOURCE_DIR}/turtle.cpp)

# 先定义库
add_library(turtlelib SHARED ${TURTLE_PATH})

# 如果需要添加子目录，请确保路径正确
# add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/subdir)