//
// Created by Galaxy on 30/3/2022.
//

#include <iostream>

#include "Booking.h"
#include "Enums.h"

Booking::Booking() {
    Booking::_bookingName = "";
    Booking::_bookingSeatNumber = 0;
    Booking::_bookingPlan = Enums::BookingPlan::ECONOMY;
}

Booking::Booking(std::string bookingName, int bookingSeatNumber, int bookingPlan) {
    Booking::_bookingName = bookingName;
    Booking::_bookingSeatNumber = bookingSeatNumber;
    Booking::_bookingPlan = bookingPlan;
}

std::string Booking::getBookingName() {
    return Booking::_bookingName;
}

int Booking::getBookingSeatNumber() {
    return Booking::_bookingSeatNumber;
}

int Booking::getBookingPlan() {
    return Booking::_bookingPlan;
}

int Booking::setBookingName(std::string newBookingName) {
    Booking::_bookingName = newBookingName;
    return 200;
}

int Booking::setBookingSeatNumber(int newBookingSeatNumber) {
    Booking::_bookingSeatNumber = newBookingSeatNumber;
    return 200;
}

int Booking::setBookingPlan(int newBookingPlan) {
    Booking::_bookingPlan = newBookingPlan;
    return 200;
}