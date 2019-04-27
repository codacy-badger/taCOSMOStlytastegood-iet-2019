cmake_minimum_required(VERSION 3.13)

set(DEBUG_FLAGS "-std=c++11 -g -O1 -Wall -Wextra -Werror -pedantic")
set(RELEASE_FLAGS "-std=c++11 -O3 -Wall -Wextra -Werror -pedantic")

set(CMAKE_CXX_FLAGS ${RELEASE_FLAGS})
set(CMAKE_CXX_FLAGS_DEBUG ${DEBUG_FLAGS})
set(CMAKE_CONFIGURATION_TYPES Debug Release)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR})

project(cosmos)

enable_testing()

add_subdirectory(code)
