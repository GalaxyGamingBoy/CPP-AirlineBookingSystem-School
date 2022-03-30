//
// Created by Galaxy on 30/3/2022.
//

#include <iostream>
#include <vector>

#include "BookingSystem.h"
#include "Booking.h"
#include "Enums.h"

bool BookingSystem::seatExists(std::vector<Booking> currentBookingList, int seatNumber) {
    for(Booking bookingListElement : currentBookingList){
        if(bookingListElement.getBookingSeatNumber() == seatNumber)
            return true;
    }
    return false;
}

bool BookingSystem::bookPlanValid(std::string plan) {
    if(plan == "ECONOMY")
        return true;
    if(plan == "ECONOMY_PLUS")
        return true;
    if(plan == "BUSINESS")
        return true;
    if(plan == "FIRST_CLASS")
        return true;
    return false;
}

int BookingSystem::stringToEnum(std::string str) {
    if(str == "ECONOMY")
        return Enums::ECONOMY;
    if(str == "ECONOMY_PLUS")
        return Enums::ECONOMY_PLUS;
    if(str == "BUSINESS")
        return Enums::BUSINESS;
    if(str == "FIRST_CLASS")
        return Enums::FIRST_CLASS;
    return 0;
}

Booking BookingSystem::newBooking(std::vector<Booking> currentBookingList) {
    std::string name, bookingPlanString;
    int seatNumber;
    int bookingPlan;

    std::cout << "New Booking" << std::endl;
    std::cout << "Reply to the following questions to complete the booking" << std::endl;
    std::cout << "----- ----- ----- ----- -----" << std::endl;
    std::cout << "Name: ";
    std::cin >> name;

    do {
        std::cout << "Seat Number: ";
        std::cin >> seatNumber;
    }while(BookingSystem::seatExists(currentBookingList, seatNumber));

    do{
        std::cout << "AVAILABLE PLANS: \nECONOMY\nECONOMY_PLUS\nBUSINESS\nFIRST_CLASS\nSelected Plan: ";
        std::cin >> bookingPlanString;
    }while(!BookingSystem::bookPlanValid(bookingPlanString));

    bookingPlan = stringToEnum(bookingPlanString);
    Booking newBooking(name, seatNumber, bookingPlan);
    return newBooking;

}