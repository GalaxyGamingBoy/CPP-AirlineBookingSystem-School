//
// Created by Galaxy on 30/3/2022.
//

#include <iostream>
#include <vector>

#include "Terminal.h"
#include "BookingSystem.h"

Terminal::Terminal() {
    Terminal::_logged_user = "LocalUser";
    Terminal::_system = "Booking";
    Terminal::_terminal_running = true;
    Terminal::_debug = false;
}

int Terminal::recogniseCommand(std::string cmd) {
    BookingSystem bookingSystem;
    if(cmd == "exit" || cmd == "e"){
        Terminal::_terminal_running = false;
        return 200;
    }
    else if(cmd == "debug"){
        Terminal::_debug = !Terminal::_debug;
        return 200;
    }
    else if(cmd == "testData"){
        Booking testA("Galaxy", 1, 0);
        Booking testB("GMAN", 25, 0);
        Booking testC("MICK", 35, 0);
        Booking testD("BILL", 5, 0);
        Booking testE("TEST_NAME", 90, 0);
        Terminal::allBookings.push_back(testA);
        Terminal::allBookings.push_back(testB);
        Terminal::allBookings.push_back(testC);
        Terminal::allBookings.push_back(testD);
        Terminal::allBookings.push_back(testE);
        return 200;
    }
    else if(cmd == "new"){
        Terminal::allBookings.push_back(bookingSystem.newBooking(Terminal::allBookings));
        return 200;
    }
    else if(cmd == "list"){
        std::cout << "Listing All Bookings:" << std::endl;
        for(Booking booking : Terminal::allBookings){
            std::cout << booking.getBookingName() << " ~ " << booking.getBookingSeatNumber() << std::endl;
        }
        return 200;
    }
    else if(cmd == "listDetail"){
        std::cout << "Listing All Bookings:" << std::endl;
        for(Booking booking : Terminal::allBookings){
            std::cout << "Name: " << booking.getBookingName()
            << " ~ Seat: " << booking.getBookingSeatNumber()
            << " ~ Plan: " << booking.getBookingPlan()
            << std::endl;
        }
    }
    else{
        return 404;
    }
}

void Terminal::askInput() {
    std::string command;
    std::string loginText = Terminal::_logged_user.append(" ~ ").append(Terminal::_system);
    while(Terminal::_terminal_running){
        std::cout << loginText << ":> ";
        std::cin >> command;
        int cmdOutput = recogniseCommand(command);
        if(Terminal::_debug)
            std::cout << "Command - Exit Code: " << cmdOutput << std::endl;
    }
}