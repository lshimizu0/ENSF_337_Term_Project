#include "File_Reader.h"

#include <iostream>



vector<Flight> read_flights_from_file(string file_name, Airline &airline) {
    vector<Flight> flights;

    ifstream in(file_name);

    if (!in.is_open()) {
        cout << "File not found: " << file_name << endl;
        exit(1);
    }

    string flight_id;
    string source;
    string dest;
    int rows;
    int seats_per_row;

    while (in >> flight_id >> source >> dest >> rows >> seats_per_row) {
        Flight flight(flight_id, source, dest, rows, seats_per_row);
        flights.push_back(flight);
        airline.addFlight(flight);
    }

    return flights;
}



vector<Passenger> read_passengers_from_file(string file_name, vector<Flight> &flights) {
    vector<Passenger> passengers;

    ifstream in(file_name);

    if (!in.is_open()) {
        cout << "File not found: " << file_name << endl;
        exit(1);
    }

    string flight_id;
    string first_name;
    string last_name;
    string phone_number;
    string seat;
    Seat* seat_ptr = nullptr;
    int id;
    int flight_index;

    while (in >> flight_id >> first_name >> last_name >> phone_number >> seat >> id) {

        int row = stoi(seat.substr(0, seat.size() - 1));
        char col = seat[seat.size() - 1];

        for(int j=0;j < flights.size();j++) {
            if (flights[j].get_flight_id() == flight_id) {
                flight_index = j;
                if (row >= 0 && row < flights[j].get_number_of_rows() && col >= 'A' && col < 'A' + flights[j].get_number_of_seats_per_row())
                {
                    seat_ptr = flights[j].get_seat(row, col);
                    seat_ptr->set_assigned(true);
                }
                else {
                    cout << "Invalid seat " << seat << " for flight " << flight_id << endl;
                }
                break;
            }
        }


        Passenger passenger(first_name, last_name, phone_number, id, flight_id);

        passenger.set_seat(seat_ptr);
        flights[flight_index].addPassenger(passenger);
        passengers.push_back(passenger);

    }

    return passengers;
}
