# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(LexicalSyntacticAnalyzer)

add_executable(main main.cpp lexer.cpp utilities.cpp)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

if(MSVC)
    target_compile_options(main PRIVATE /W4)
else()
    target_compile_options(main PRIVATE -Wall -Wextra -pedantic)
endif()
