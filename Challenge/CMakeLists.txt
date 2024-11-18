cmake_minimum_required(VERSION 3.29)
project(Challenge)

set(CMAKE_CXX_STANDARD 20)

add_executable(Challenge main.cpp
        QuestionSystem.cpp
        QuestionSystem.h
        InputHandler.cpp
        InputHandler.h)
