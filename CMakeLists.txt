# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(LexerExample)

add_executable(main main.cpp lexer.cpp utilities.cpp)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    target_compile_options(main PRIVATE /W4)
else()
    target_compile_options(main PRIVATE -Wall -Wextra -pedantic)
endif()
