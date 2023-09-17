cmake_minimum_required(VERSION 3.24)
project(HuffmanAlgo)

set(CMAKE_CXX_STANDARD 17)

add_library(HuffmanAlgo huffman.h huffman.cpp)
add_executable(main main.cpp)

target_link_libraries(main HuffmanAlgo)