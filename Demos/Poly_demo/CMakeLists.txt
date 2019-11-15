cmake_minimum_required(VERSION 3.14)
project(Poly_demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Poly_demo main.cpp Vehicle.cpp Vehicle.h Bicycle.cpp Bicycle.h Boat.cpp Boat.h)