cmake_minimum_required(VERSION 3.5)

project(timee LANGUAGES C)

add_executable(timee main.c)

install(TARGETS timee
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
