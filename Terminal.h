//
// Created by Galaxy on 30/3/2022.
//
#pragma once

#include <iostream>

#ifndef AIRLINEBOOKINGSYSTEM_TERMINAL_H
#define AIRLINEBOOKINGSYSTEM_TERMINAL_H

#include <vector>

#include "Booking.h"

class Terminal {
private:
    std::string _logged_user, _system;
    bool _terminal_running, _debug;
public:
    Terminal();
    std::vector<Booking> allBookings;
    void askInput();
    int recogniseCommand(std::string cmd);
};


#endif //AIRLINEBOOKINGSYSTEM_TERMINAL_H
