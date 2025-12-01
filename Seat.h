//
// Class stores information for seat
//

#ifndef SEAT_H
#define SEAT_H

class Seat
{
public:
    Seat(int seatNumber, char seat_character);
    // REQUIRES: seatNumber is a positive integer, seat_character is a valid character
    // PROMISES: initializes the Seat object with the given seat number and character

    Seat()
    {
        // REQUIRES: nothing
        // PROMISES: initializes the Seat object with default values
        row_number = 0;
        seat_character = ' ';
        assigned = false;
    };
    void set_row_number(int row_number)
    {
        // REQUIRES: row_number is a positive integer
        // PROMISES: sets the row number of the seat to the given value
        this->row_number = row_number;
    };
    void set_seat_character(char seat_character)
    {
        // REQUIRES: seat_character is a valid character
        // PROMISES: sets the seat character of the seat to the given value
        this->seat_character = seat_character;
    }
    void set_assigned(bool assigned)
    {
        // REQUIRES: assigned is a boolean value
        // PROMISES: sets the assigned status of the seat to the given value
        this->assigned = assigned;
    }
    int get_row_number()
    {
        // REQUIRES: nothing
        // PROMISES: returns the row number of the seat
        return row_number;
    };
    char get_seat_character()
    {
        // REQUIRES: nothing
        // PROMISES: returns the seat character of the seat
        return seat_character;
    }
    bool get_assigned()
    {
        // REQUIRES: nothing
        // PROMISES: returns the assigned status of the seat
        return assigned;
    }

private:
    int row_number;
    char seat_character;
    bool assigned;
};

#endif // SEAT_H
