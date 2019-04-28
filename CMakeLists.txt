cmake_minimum_required(VERSION 3.13)

# TODO add -Werror for static analysis
set(DEBUG_FLAGS "-std=c++11 -g -O1 -Wall -Wextra -pedantic")
set(RELEASE_FLAGS "-std=c++11 -O3 -Wall -Wextra -pedantic")

set(CMAKE_CXX_FLAGS ${RELEASE_FLAGS})
set(CMAKE_CXX_FLAGS_DEBUG ${DEBUG_FLAGS})
set(CMAKE_CONFIGURATION_TYPES Debug Release)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR})

project(cosmos)

enable_testing()

include_directories(${CMAKE_CURRENT_LIST_DIR}/test/c++)

add_subdirectory(code)
