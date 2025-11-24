//
// Created by lupsh on 2025-11-24.
//

#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

using namespace std;

class Passenger {
public:
    Passenger(string first_name, string last_name, int phone_number) {
        this->first_name = first_name;
        this->last_name = last_name;
        this->phone_number = phone_number;
    };
    int get_phone_number() {
        return phone_number;
    };
    string get_first_name() {
        return first_name;
    }
    string get_last_name() {
        return last_name;
    }
private:
    string first_name;
    string last_name;
    int phone_number;
};



#endif //PASSENGER_H
