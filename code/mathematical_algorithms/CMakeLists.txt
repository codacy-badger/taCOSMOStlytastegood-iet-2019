cmake_minimum_required(VERSION 3.14)

set(sources 
	${CMAKE_CURRENT_LIST_DIR}/src/fast_inverse_sqrt/fast_inverse_sqrt.cpp)
set(tests
	${CMAKE_CURRENT_LIST_DIR}/test/test_fast_inverse_sqrt.cpp)

add_library(mathematical_algorithms ${sources})

add_executable(test ${sources} ${tests})
						
include_directories(${CMAKE_CURRENT_LIST_DIR}/include ${CMAKE_CURRENT_LIST_DIR}/../../test/c++/)

add_test(test_all ${EXECUTABLE_OUTPUT_PATH}/test)