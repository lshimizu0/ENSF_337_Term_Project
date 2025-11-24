//
// Created by lupsh on 2025-11-24.
//
#include <iostream>
#include "Flight.h"


Flight::Flight(string flight_id, Route route, int number_of_rows, int number_of_seats_per_row) {
    this->flight_id = flight_id;
    this->route = route;
    this->number_of_rows = number_of_rows;
    this->number_of_seats_per_row = number_of_seats_per_row;
    this->seats = number_of_seats_per_row * number_of_rows;
}




bool Flight::in_passengers(Passenger passenger) {
    for(int i=0; i <passengers.size();i++) {
        if(passengers[i].get_phone_number() == passenger.get_phone_number()) {
            return true;
        }
    }
    return false;
}


void Flight::addPassenger(Passenger passenger) {
    if(passengers.size() < number_of_rows*number_of_seats_per_row && !in_passengers(passenger)) {
        passengers.push_back(passenger);
    }else {
        cout<<"Passenger already exists"<<endl;
    }
}

void Flight::deletePassenger(int passenger_number) {
    for(int i=0; i <passengers.size();i++) {
        if(passengers[i].get_phone_number() == passenger_number) {
            passengers.erase(passengers.begin()+i);
        }
    }
}


