cmake_minimum_required(VERSION 3.17)
project(04)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex02)

add_executable(04
        ex02/AssaultTerminator.cpp
        ex02/AssaultTerminator.hpp
        ex02/ISpaceMarine.hpp
        ex02/ISquad.hpp
        ex02/main.cpp
        ex02/Squad.cpp
        ex02/Squad.hpp
        ex02/TacticalMarine.cpp
        ex02/TacticalMarine.hpp
        )
