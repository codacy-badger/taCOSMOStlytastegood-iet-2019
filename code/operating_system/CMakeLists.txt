
set(sources
	${CMAKE_CURRENT_LIST_DIR}/src/scheduling/round_robin_scheduling/round_robin_scheduling.cpp)
set(tests
	${CMAKE_CURRENT_LIST_DIR}/test/test_round_robin_scheduling.cpp)
get_filename_component(current_module ${CMAKE_CURRENT_LIST_DIR} NAME)
set(current_test "${current_module}_test")

message(STATUS "Building module ${current_module}")

add_library(${current_module} ${sources})

add_executable(${current_test} ${tests})

target_link_libraries(${current_test} ${current_module})

include_directories(${CMAKE_CURRENT_LIST_DIR}/include ${CMAKE_CURRENT_LIST_DIR}/../../test/c++/)

add_test(test_all ${EXECUTABLE_OUTPUT_PATH}/${current_test})