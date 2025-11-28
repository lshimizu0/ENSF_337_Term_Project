//
// Created by lupsh on 2025-11-24.
//

#ifndef AIRLINE_H
#define AIRLINE_H
#include <vector>

#include "Flight.h"

using namespace std;

class Airline
{
public:
    Airline(string name, vector<Flight> flights);
    bool in_flights();
    void addFlight(Flight flight);

private:
    vector<Flight> flights;
    string name;
};

#endif // AIRLINE_H
