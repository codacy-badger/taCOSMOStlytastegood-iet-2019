
set(sources
	${CMAKE_CURRENT_LIST_DIR}/src/list/singly_linked_list.cpp)
set(tests
	${CMAKE_CURRENT_LIST_DIR}/test/test_singly_linked_list.cpp)
get_filename_component(current_module ${CMAKE_CURRENT_LIST_DIR} NAME)
set(current_test "${current_module}_test")

message(STATUS "Building module ${current_module}")

add_library(${current_module} ${sources})

add_executable(${current_test} ${tests})

target_link_libraries(${current_test} ${current_module})

include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

add_test(${current_test} ${EXECUTABLE_OUTPUT_PATH}/${current_test})