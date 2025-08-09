cmake_minimum_required(VERSION 3.28.3)
project(primemachine)

set(COMPILE_FLAGS -Wall -Wextra -Werror)
add_compile_options(${COMPILE_FLAGS})

add_executable(${CMAKE_PROJECT_NAME} src/main.c)
