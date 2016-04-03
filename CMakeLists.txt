cmake_minimum_required(VERSION 3.3)
project(StateMachine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp StateMachine.cpp StateMachine.h Event.cpp Event.h)
add_executable(StateMachine ${SOURCE_FILES})