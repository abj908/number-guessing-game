cmake_minimum_required(VERSION 3.10)

project(NumberGuessingGame)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(game src/main.cpp src/guessing_game.cpp)
add_executable(game_tests tests/guessing_game_tests.cpp src/guessing_game.cpp)

target_link_libraries(game_tests gtest gtest_main pthread)

set(CMAKE_BUILD_TYPE Debug)