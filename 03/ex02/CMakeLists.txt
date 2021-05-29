cmake_minimum_required(VERSION 3.19)
project(ex02)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex02
        ClapTrap.cpp
        ClapTrap.hpp
        FragTrap.cpp
        FragTrap.hpp
        main.cpp
        ScavTrap.cpp
        ScavTrap.hpp)
