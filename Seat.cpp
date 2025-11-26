//
// Created by lupsh on 2025-11-24.
//

#include "Seat.h"


class Seat {
    private:
        int row_number;
        char seat_character;
    
    public:
        // Constructors
        Seat(int row, char seat) : row_number(row), seat_character(seat) {}
        Seat() : row_number(0), seat_character('A') {}

        // Getters
        int getRowNumber() const { 
            return row_number;
        }
        char getSeatCharacter() const {
            return seat_character;
        }

        // Setters
        void setRowNumber(int row) {
            row_number = row;
        }
        void setSeatCharacter(char seat) {
            seat_character = seat;
        }
}