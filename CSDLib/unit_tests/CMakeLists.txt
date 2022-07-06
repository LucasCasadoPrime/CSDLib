
# Specify the minimum version.
cmake_minimum_required(VERSION 3.20)
project(unit_tests)

FIND_PROGRAM(GCOV gcov)

set(PROJECT_ROOT "..")
set(SOURCE_ROOT "${PROJECT_ROOT}/src")

include_directories(
    "${PROJECT_ROOT}/src"
)

add_executable(unit_tests
    "${SOURCE_ROOT}/array_int_management.c"
    "test_array_int.c"
    "${SOURCE_ROOT}/array_str_management.c"
    "test_array_str.c"
    "${SOURCE_ROOT}/generic_system_linked_list.c"
    "test_linked_list.c"
    "${SOURCE_ROOT}/string_management.c"
    "${SOURCE_ROOT}/file_management.c"
    "test_string.c"
)

if(CMAKE_COMPILER_IS_GNUCC)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fprofile-arcs -ftest-coverage --coverage")
endif() # CMAKE_COMPILER_IS_GNUCC

target_link_libraries(unit_tests
    criterion
)