cmake_minimum_required(VERSION 3.23)

project(calc)

add_executable(calc)

target_sources(calc
    PRIVATE
        calc.c
)