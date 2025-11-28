//
// Created by Nnamdi on 2025-11-28.
//

#include <iostream>
#include "Airline.h"
#include "Flight.h"
#include <vector>

Airline::Airline(string name, vector<Flight> flights)
{
    this->name = name;
    this->flights = flights;
}

bool Airline::in_flights()
{

    if (flights.size() > 0)
    {
        return true;
    }
    return false;
}

void Airline::addFlight(Flight flight)
{
    flights.push_back(flight);
}
