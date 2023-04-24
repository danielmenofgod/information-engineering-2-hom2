cmake_minimum_required(VERSION 3.5)

project(untitled104 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(untitled104 main.cpp Time.h Time.cpp)

install(TARGETS untitled104
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
