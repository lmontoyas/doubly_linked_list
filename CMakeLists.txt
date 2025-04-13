cmake_minimum_required(VERSION 3.10)

project(doubly_linked_list)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(doubly_linked_list main.cpp
        include/eDll/DoublyLinkedLists.h
        include/eDll/Node.h
)