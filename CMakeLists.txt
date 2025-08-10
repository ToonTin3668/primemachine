cmake_minimum_required(VERSION 3.28.3)
project(primemachine)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(COMPILE_FLAGS -Wall -Wextra -Werror)
add_compile_options(${COMPILE_FLAGS})

add_executable(example src/main.c)

target_include_directories(example
PUBLIC src/include)

