

#include <iostream>
#include "Airline.h"

Airline::Airline(string name, vector<Flight> flights)
{
    this->name = name;
    this->flights = flights;
}

bool Airline::in_flights()
{
    // Implementation needed
    return false;
}

void Airline::addFlight(Flight flight)
{
    flights.push_back(flight);
}


