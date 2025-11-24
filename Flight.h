//
// Created by lupsh on 2025-11-24.
//

#ifndef FLIGHT_H
#define FLIGHT_H
#include <vector>

#include "Passenger.h"
#include "Route.h"

using namespace std;

class Flight {
private:
    string flight_id;
    Route route;
    int seats;
    vector<Passenger> passengers;
    int number_of_rows;
    int number_of_seats_per_row;


    public:
    Flight(string flight_id, Route route, int number_of_rows, int number_of_seats_per_row);

    bool in_passengers(Passenger passenger);
    int get_number_of_rows() {
        return number_of_rows;
    };
    int get_number_of_seats_per_row() {
        return number_of_seats_per_row;
    };
    Route get_route() {
        return route;
    };
    vector<Passenger> get_passengers() {
        return passengers;
    };
    string get_flight_id() {
        return flight_id;
    }
    void addPassenger(Passenger passenger);
    void deletePassenger(int passenger_number);
};



#endif //FLIGHT_H
