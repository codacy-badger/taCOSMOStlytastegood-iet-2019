cmake_minimum_required(VERSION 3.13)

set(DEBUG_FLAGS "-std=c++11 -g -O1 -Wall -Wextra -Werror -pedantic")
set(RELEASE_FLAGS "-std=c++11 -O3 -Wall -Wextra -Werror -pedantic")

set(CMAKE_CXX_FLAGS ${RELEASE_FLAGS})
set(CMAKE_CXX_FLAGS_DEBUG ${DEBUG_FLAGS})
set(CMAKE_CONFIGURATION_TYPES Debug Release)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR})

project(cosmos)

# We probably don't want this to run on every build.
option(COVERALLS "Turn on coveralls support" OFF)
option(COVERALLS_UPLOAD "Upload the generated coveralls json" ON)

# Add project cmake modules to path.
set(COVERALLS_CMAKE_PATH ${PROJECT_SOURCE_DIR}/coveralls-cmake)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${COVERALLS_CMAKE_PATH})

if (COVERALLS)
	include(Coveralls)
	coveralls_turn_on_coverage()
endif()

# Setup the coveralls target and tell it to gather
# coverage data for all the lib sources.
if (COVERALLS)
	set(SOURCES_FOR_CODE_COVERAGE 
		${PROJECT_SOURCE_DIR}/code/data_structures/src/list/singly_linked_list.cpp
		${PROJECT_SOURCE_DIR}/code/mathematical_algorithms/src/fast_inverse_sqrt/fast_inverse_sqrt.cpp
		)
		
	coveralls_setup(
        "${SOURCES_FOR_CODE_COVERAGE}"
        ${COVERALLS_UPLOAD}                 
        "${COVERALLS_CMAKE_PATH}")
endif()

enable_testing()

include_directories(${CMAKE_CURRENT_LIST_DIR}/test/c++)

add_subdirectory(code)
