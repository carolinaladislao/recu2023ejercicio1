cmake_minimum_required(VERSION 3.27)
project(ejercicio1 C)

set(CMAKE_C_STANDARD 11)

add_executable(ejercicio1 main.c
        listaSimple.c
        listaSimple.h)
