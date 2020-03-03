cmake_minimum_required(VERSION 3.10)
project(qt_moving_rectangle)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "/Users/milyausha/qt/5.9.9/clang_64")

find_package(Qt5Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(qt_moving_rectangle main.cpp Rectangle.cpp Rectangle.h Bullet.cpp Bullet.h)
target_link_libraries(qt_moving_rectangle Qt5::Widgets)
