# AJimber
# 3º de Grado en Ingeniería Informática
# Práctica 2 de Algorítmica

cmake_minimum_required(VERSION 3.10)

project(MergeSort LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main
    main.cpp
    funcionesMedioNivel.cpp
    ordenacion.cpp
    funcionesAuxiliares.cpp
    ClaseTiempo.cpp
)

target_compile_options(main PRIVATE -Wall -Wextra)
