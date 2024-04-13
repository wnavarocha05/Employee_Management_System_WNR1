cmake_minimum_required(VERSION 3.27)
project(Employee_Management_System)

set(CMAKE_CXX_STANDARD 17)

add_executable(Employee_Management_System main.cpp
        employee_information.cpp
        employee_information.h
        Employee_Department.cpp
        Employee_Department.h)
