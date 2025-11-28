//
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

    string get_flight_id() {
        return flight_id;
    }
    string get_first_name() {
        return first_name;
    }
    string get_last_name() {
        return last_name;
    }
    string get_phone_number() {
        return phone_number;
    };
    Seat* get_seat() {
        return seat;
    }
    int get_id() {
        return id;
    }
    void set_flight_id(string flight_id) {
        this->flight_id = flight_id;
    }
    void set_first_name(string first_name) {
        this->first_name = first_name;
    }
    void set_last_name(string last_name) {
        this->last_name = last_name;
    }
    void set_phone_number(string phone_number) {
        this->phone_number = phone_number;
    }
    void set_seat(Seat *seat) {
        this->seat = seat;
    }
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
