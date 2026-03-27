cmake_minimum_required(VERSION 3.27)

project(LinkedList
        VERSION 1.0
        DESCRIPTION "Material del curso de DSA con C++"
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

add_executable(LinkedList
    src/main.cpp
    src/LinkedList.cpp
    headers/LinkedList.h
    headers/Node.h
)