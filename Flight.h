//
// Created by lupsh on 2025-11-24.
//

#ifndef FLIGHT_H
#define FLIGHT_H
#include <vector>

#include "Passenger.h"
#include "Route.h"
#include "Seat.h"

using namespace std;

class Flight {
private:
    string flight_id;
    Route route;
    Seat **seats;
    vector<Passenger> passengers;
    int number_of_rows;
    int number_of_seats_per_row;


    public:
    Flight(string flight_id, string source, string dest, int number_of_rows, int number_of_seats_per_row);


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
    Seat *get_seat(int row, char col) {
        return &seats[row][col-65];
    };
    bool in_passengers(Passenger passenger);
    void addPassenger(Passenger passenger) {
        passengers.push_back(passenger);
    };
    void deletePassenger(int passenger_number);
    void printSeatMap();
};



#endif //FLIGHT_H
