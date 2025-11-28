//
// Created by lupsh on 2025-11-24.
//

#ifndef AIRLINE_H
#define AIRLINE_H
#include <vector>

#include "Flight.h"


class Airline {
    public:
    Airline(string name) {
        this->name = name;
    };
    void addFlight(Flight flight);
private:
    vector<Flight> flights;
    string name;
};



#endif //AIRLINE_H
