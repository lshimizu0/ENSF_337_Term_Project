// Filename: Flight.cpp

#include <iostream>
#include "Flight.h"
#include "Passenger.h"


Flight::Flight(string flight_id, string source, string dest, int number_of_rows, int number_of_seats_per_row) {
    this->flight_id = flight_id;
    this->route.setSource(source);
    this->route.setDestination(dest);
    this->number_of_rows = number_of_rows;
    this->number_of_seats_per_row = number_of_seats_per_row;

    seats = new Seat*[number_of_rows];

    for(int j = 0; j < number_of_rows; j++) {
        seats[j] = new Seat[number_of_seats_per_row];
    }
    for(int i = 0; i < number_of_rows; i++) {
        for(int j = 0; j < number_of_seats_per_row; j++) {
            seats[i][j].set_row_number(i);
            seats[i][j].set_seat_character(j+65);
        }
    }

}





bool Flight::in_passengers(int passenger_id) {
    for(int i=0; i <passengers.size();i++) {
        if(passengers[i].get_id() == passenger_id) {
            return true;
        }
    }
    return false;
}

void Flight::deletePassenger(int passenger_id) {
    if(in_passengers(passenger_id)) {
        for(int i=0; i <passengers.size();i++) {
            if(passengers[i].get_id() == passenger_id) {
                passengers.erase(passengers.begin()+i);
            }
        }
    }else {
        cout<<"Passenger does not exist"<<endl;
    }

}
void Flight::printSeatMap() {

    for(int i=0; i <number_of_rows; i++) {
        cout<<"+---+---+---+---+---+---+\n";
        for(int j = 0; j < number_of_seats_per_row; j++) {
            if(seats[i][j].get_assigned()) {
                cout<<"| x ";
            }else
                cout<<"|   ";
        }
        cout<<"|\n";
    }
    cout<<"+---+---+---+---+---+---+";
}




