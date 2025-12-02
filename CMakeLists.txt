cmake_minimum_required(VERSION 3.29)
project(Term_Project)

set(CMAKE_CXX_STANDARD 20)

add_executable(Term_Project main.cpp
        Flight.cpp
        Flight.h
        Passenger.cpp
        Passenger.h
        Seat.cpp
        Seat.h
        Airline.cpp
        Airline.h
        Route.cpp
        Route.h
        File_Reader.cpp
        File_Reader.h
)
