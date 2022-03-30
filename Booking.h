//
// Created by Galaxy on 30/3/2022.
//

#pragma once

#ifndef AIRLINEBOOKINGSYSTEM_BOOKING_H
#define AIRLINEBOOKINGSYSTEM_BOOKING_H

#include <iostream>

#include "Enums.h"

class Booking {
private:
    std::string _bookingName;
    int _bookingSeatNumber;
    int _bookingPlan;
public:
    Booking();
    Booking(std::string bookingName, int bookingSeatNumber, int bookingPlan);
    std::string getBookingName();
    int getBookingSeatNumber();
    int getBookingPlan();

    int setBookingName(std::string newBookingName);
    int setBookingSeatNumber(int newBookingSeatNumber);
    int setBookingPlan(int newBookingPlan);
};


#endif //AIRLINEBOOKINGSYSTEM_BOOKING_H
