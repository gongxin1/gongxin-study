cmake_minimum_required(VERSION 3.1)

project(cpp)

include_directories( ${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/lib)



message(STATUS "entering test:")
add_subdirectory(test)

message(STATUS "exit from test!")
add_subdirectory(src)

