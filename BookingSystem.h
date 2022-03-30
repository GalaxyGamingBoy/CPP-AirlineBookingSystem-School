//
// Created by Galaxy on 30/3/2022.
//
#pragma once

#ifndef AIRLINEBOOKINGSYSTEM_BOOKINGSYSTEM_H
#define AIRLINEBOOKINGSYSTEM_BOOKINGSYSTEM_H

#include <iostream>

#include "Booking.h"
#include "Enums.h"

class BookingSystem {
public:
    bool seatExists(std::vector<Booking> currentBookingList, int seatNumber);
    bool bookPlanValid(std::string plan);
    int stringToEnum(std::string str);
    Booking newBooking(std::vector<Booking> currentBookingList);
    std::vector<Booking> bookingChangeName(std::vector<Booking> currentBookingList);
    std::vector<Booking> bookingChangeSeat(std::vector<Booking> currentBookingList);
    std::vector<Booking> bookingChangePlan(std::vector<Booking> currentBookingList);
};


#endif //AIRLINEBOOKINGSYSTEM_BOOKINGSYSTEM_H
