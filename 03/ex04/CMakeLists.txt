cmake_minimum_required(VERSION 3.17.5)
project(ex02)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex04
        SuperTrap.cpp
        SuperTrap.hpp
        ClapTrap.cpp
        ClapTrap.hpp
        FragTrap.cpp
        FragTrap.hpp
        NinjaTrap.cpp
        NinjaTrap.hpp
        main.cpp
        ScavTrap.cpp
        ScavTrap.hpp)
