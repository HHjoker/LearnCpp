cmake_minimum_required(VERSION 3.16.3)
project(HHProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_PATH ${CMAKE_CURRENT_SOURCE_DIR})

# 测试项目开关
option(BUILD_TESTS "Build test projects" OFF)

add_subdirectory(src)
add_subdirectory(src/add_dir)

add_executable(hhapp ${SRC_PATH}/main.cpp)

# 根据BUILD_TESTS选项决定是否编译测试
if(BUILD_TESTS)
    add_subdirectory(test)
    enable_testing()
endif()

target_link_libraries(hhapp PUBLIC srclib)
target_link_libraries(hhapp PUBLIC addlib)