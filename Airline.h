// Filename: Airline.h
// Purpose: Declare the Airline class, which stores the airline name and
//          its collection of flights.

#ifndef AIRLINE_H
#define AIRLINE_H

#include <vector>
#include "Flight.h"

class Airline {
public:
    /*
     * Constructor: Airline
     * PURPOSE: Initialize an Airline with a given name.
     * REQUIRES: name = the name of the airline
     */
    Airline(string name) {
        this->name = name;
    }

    /*
    /* Function: addFlight
     * PURPOSE: Add a Flight object to the airline's list of flights.
     * REQUIRES: flight = a Flight to append to the internal flights vector
     */
    void addFlight(Flight flight);

private:
    vector<Flight> flights;
    string name;
};

#endif // AIRLINE_H