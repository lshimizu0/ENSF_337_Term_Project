// Filename: Passenger.h
// Class defined passenger stores passenger information
// like what flight and seat they are assigned to and personal information
//

#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

#include "Seat.h"


using namespace std;

class Passenger {
public:
    Passenger(string first_name, string last_name, string phone_number, int id, string flight_id) {
        this->first_name = first_name;
        this->last_name = last_name;
        this->phone_number = phone_number;
        this->id = id;
        this->flight_id = flight_id;
    };
    // PROMISES: returns passenger's assigned flight id
    string get_flight_id() {
        return flight_id;
    }
    // PROMISES: returns passenger's first name
    string get_first_name() {
        return first_name;
    }
    // PROMISES: returns passenger's last name
    string get_last_name() {
        return last_name;
    }
    // PROMISES: returns passenger's phone number
    string get_phone_number() {
        return phone_number;
    };
    // PROMISES: returns pointer to seat that the passenger is assigned to
    Seat* get_seat() {
        return seat;
    }
    // PROMISES: returns passenger id
    int get_id() {
        return id;
    }
    // PROMISES: sets flight id
    void set_flight_id(string flight_id) {
        this->flight_id = flight_id;
    }
    // PROMISES: sets passenger's first name
    void set_first_name(string first_name) {
        this->first_name = first_name;
    }
    // PROMISES: sets passenger's last name
    void set_last_name(string last_name) {
        this->last_name = last_name;
    }
    // PROMISES: sets passenger's phone number
    void set_phone_number(string phone_number) {
        this->phone_number = phone_number;
    }
    // PROMISES: sets passenger seat to pointer
    void set_seat(Seat *seat) {
        this->seat = seat;
    }
    // PROMISES: sets passenger id
    void set_id(int id) {
        this->id = id;
    }

private:
    string flight_id;
    string first_name;
    string last_name;
    string phone_number;
    Seat *seat;
    int id;
};



#endif //PASSENGER_H
