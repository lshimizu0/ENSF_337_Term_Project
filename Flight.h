// Flight.h
// Class stores flight information
//

#ifndef FLIGHT_H
#define FLIGHT_H
#include <vector>
#include <iostream>

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

    // PROMISES: returns number of rows in plane
    int get_number_of_rows() {
        return number_of_rows;
    };
    // PROMISES: returns number of seats in a row in plane
    int get_number_of_seats_per_row() {
        return number_of_seats_per_row;
    };
    // PROMISES: returns route of plane
    Route get_route() {
        return route;
    };
    // PROMISES: returns vector of passengers assigned to plane
    vector<Passenger> get_passengers() {
        return passengers;
    };
    // PROMISES: returns flight id
    string get_flight_id() {
        return flight_id;
    }
    /* REQUIRES: row is a valid seat in the bounds of number of rows and
     * col is in bound of number of seats per row
     * PROMISES: Returns pointer to the seat at row and col.
     */
    Seat *get_seat(int row, char col) {
        if(row < 0 || row > number_of_rows || col-65 < 0 || col-65 > number_of_seats_per_row) {
            cout<<"ERROR in getting seat\nOut of bounds\nEXITING";
            exit(1);
        }
        return &seats[row][col-65];
    };
    /* REQUIRES: passenger id is equivalent to one of the passengers
    * PROMISES: returns true if passenger is in passengers vector
    */
    bool in_passengers(int passenger_id);
    /* REQUIRES: passenger is a valid passenger object
    * PROMISES: adds passenger to the passengers vector
    */
    void addPassenger(Passenger passenger) {
        passengers.push_back(passenger);
    };
    /* REQUIRES: passenger number is equivalent to a passenger id from passengers vector
     * PROMISES: deletes the passenger from the vector.
     */
    void deletePassenger(int passenger_number);
    // PROMISES: outputs seat map formated to the console
    void printSeatMap();
};



#endif //FLIGHT_H
