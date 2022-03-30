cmake_minimum_required(VERSION 3.21)
project(AirlineBookingSystem)

set(CMAKE_CXX_STANDARD 11)

add_executable(AirlineBookingSystem main.cpp Terminal.cpp Terminal.h Booking.cpp Booking.h Enums.cpp Enums.h BookingSystem.cpp BookingSystem.h)
