cmake_minimum_required(VERSION 3.26)
project(cinterpret C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(cinterpret
        main.c
        token.h
        tokenizer.c
        tokenizer.h
        tokenType.h)
