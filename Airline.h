//
// Created by Nnamdi on 2025-11-28.
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
    string get_name()
    {
        return name;
    };
    bool get_flights()
    {
        return flights.size() > 0;
    };

private:
    vector<Flight> flights;
    string name;
};

#endif // AIRLINE_H
