cmake_minimum_required(VERSION 3.1)

project(FootballManager)

file(GLOB_RECURSE src_files src/*.cpp)

add_executable(FootballManager main.cpp ${src_files})

target_include_directories(FootballManager PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)