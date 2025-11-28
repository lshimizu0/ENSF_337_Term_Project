//
// Created by lupsh on 2025-11-24.
//

#ifndef SEAT_H
#define SEAT_H



class Seat {
public:
    Seat(int seatNumber, char seat_character);
    Seat() {
        row_number = 0;
        seat_character = ' ';
        assigned = false;
    };
    void set_row_number(int row_number) {
        this->row_number = row_number;
    };
    void set_seat_character(char seat_character) {
        this->seat_character = seat_character;
    }
    void set_assigned(bool assigned) {
        this->assigned = assigned;
    }
    int get_row_number() {
        return row_number;
    };
    char get_seat_character() {
        return seat_character;
    }
    bool get_assigned() {
        return assigned;
    }


private:
    int row_number;
    char seat_character;
    bool assigned;
};



#endif //SEAT_H
