cmake_minimum_required(VERSION 3.1)

project(FootballManager)

file (GLOB_RECURSE FM_SOURCES CONFIGURE_DEPENDS "*.cpp")
file (GLOB_RECURSE FM_HEADERS CONFIGURE_DEPENDS "*.h")

set (FM_INCLUDE_DIRS "")
foreach (_headerFile ${FM_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND FM_INCLUDE_DIRS ${_dir})
endforeach()
list (REMOVE_DUPLICATES FM_INCLUDE_DIRS)

add_executable(FootballManager ${FM_SOURCES})

target_include_directories(FootballManager PRIVATE ${FM_INCLUDE_DIRS})