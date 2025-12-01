// Filename: Airline.h
// Purpose: Declare the Airline class, which stores the airline name and
// its collection of flights.

#ifndef AIRLINE_H
#define AIRLINE_H
#include <vector>
#include "Flight.h"


class Airline {
    public:
    // Constructor
    // REQUIRES: name = name of the airline
    // PROMISES: Initialize an Airline object with a given name.
    Airline(string name) {
        this->name = name;
    };
    // Function
    // REQUIRES: flight = a Flight to append to the internal flights vector
    // PROMISES: Add a Flight object to the airline's list of flights.
    void addFlight(Flight flight);
private:
    vector<Flight> flights;
    string name;
};



#endif //AIRLINE_H
