cmake_minimum_required(VERSION 3.23)
project(MTMCHKIN)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(MTMCHKIN
        Card.h

        Mtmchkin.h
        Mtmchkin.cpp
        test.cpp
        utilities.cpp
        utilities.h
        Player.h
        Player.cpp
        Card.cpp)
