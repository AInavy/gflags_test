cmake_minimum_required( VERSION 2.8 )

project( gflags_test )

find_package(gflags REQUIRED)

add_executable( gflags_test gflags_test.cpp )

target_link_libraries(gflags_test gflags)
