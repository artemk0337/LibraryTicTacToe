
cmake_minimum_required(VERSION 3.10)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 11)

option(BUILD_SHARED_LIBS "Build shared (dynamic) library instead of static" OFF)

add_subdirectory(lib)

add_executable(TicTacToe main.cpp)
target_link_libraries(TicTacToe PRIVATE libtictactoe)