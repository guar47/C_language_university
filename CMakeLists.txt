cmake_minimum_required(VERSION 3.9)
project(C_univer C)

set(CMAKE_C_STANDARD 99)

add_executable(C_hello hello.c)
add_executable(C_sum sum.c)
add_executable(C_test_if test_if.c)
add_executable(C_test_if_else test_if_else.c)
add_executable(C_test_if_else_nested2 test_if_else_nested2.c)
add_executable(while while.c)
add_executable(test_increment_decrement test_increment_decrement.c)
add_executable(sum_even_for sum_even_for.c)