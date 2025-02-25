cmake_minimum_required(VERSION 3.16.3)

project(test)

add_subdirectory(${SRC_PATH}/lib/googletest-1.16.0 googletest)

add_executable(test_add ${CMAKE_CURRENT_SOURCE_DIR}/test_add.cpp)
target_include_directories(test_add PUBLIC ${SRC_PATH}/lib/googletest-1.16.0/googletest/include)
target_include_directories(test_add PUBLIC ${SRC_PATH}/lib/googletest-1.16.0/googlemock/include)
target_include_directories(test_add PUBLIC ${SRC_PATH})
target_include_directories(test_add PUBLIC ${SRC_PATH}/src/add_dir)
target_link_libraries(test_add PUBLIC srclib addlib gtest gtest_main gmock gmock_main)

add_test(NAME test_add COMMAND test_add)

add_executable(test_turtle ${CMAKE_CURRENT_SOURCE_DIR}/test_turtle.cpp)
target_include_directories(test_turtle PUBLIC ${SRC_PATH}/src/turtle)

target_link_libraries(test_turtle PUBLIC srclib turtlelib gtest gtest_main gmock gmock_main)

add_test(NAME test_turtle COMMAND test_turtle)