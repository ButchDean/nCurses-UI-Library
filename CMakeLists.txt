cmake_minimum_required(VERSION 3.17 FATAL_ERROR)

project(nCurses-UI-Library)

set(CMAKE_CXX_STANDARD 17)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

include_directories(src/hdrs)

add_executable(ncui
                src/main.cpp
                src/UI.cpp
                src/Window.cpp
                src/Write.cpp)

target_link_libraries(ncui ${CURSES_LIBRARIES})