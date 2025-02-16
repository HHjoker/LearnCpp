cmake_minimum_required(VERSION 3.10)

# Set the project name
project(LearnCpp)

set(CMAKE_CXX_STANDARD 17)  # 设置c++编译版本
set(CMAKE_CXX_STANDARD_REQUIRED ON) # 是否强制该版本

# Add the main application
add_executable(hhapp src/main.cpp)

# 测试项目开关
option(BUILD_TESTS "build test projects" OFF)
if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()

# Add the test application
# add_executable(test_app test/test.cpp)

# Optionally, you can link libraries or set properties for each target
# target_link_libraries(main_app some_library)
# target_link_libraries(test_app some_library)