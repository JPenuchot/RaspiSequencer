cmake_minimum_required(VERSION 2.8.9)
project(RaspStepSequencer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

file(GLOB SOURCES "src/*.cpp" "src/core/*.cpp" "src/sequencer/*.cpp" "src/iterators/*.cpp")

add_executable(raspisequencer ${SOURCES})