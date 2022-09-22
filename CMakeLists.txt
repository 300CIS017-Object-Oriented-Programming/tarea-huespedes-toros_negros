cmake_minimum_required(VERSION 3.23)
project(tarea_huespedes_toros_negros)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(tarea_huespedes_toros_negros
        Evaluacion.cpp
        Evaluacion.h
        Hogar.cpp
        Hogar.h
        Huesped.cpp
        Huesped.h
        Main.cpp
        Persona.cpp
        Persona.h
        Propietario.cpp
        Propietario.h
        Reserva.cpp
        Reserva.h
        Sistema.cpp
        Sistema.h)
