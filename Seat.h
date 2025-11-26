//
// Created by lupsh on 2025-11-24.
//

#ifndef SEAT_H
#define SEAT_H



class Seat {
    
    Seat();
    Seat(int row, char seat);

    int getRowNumber() const;
    char getSeatCharacter() const;

    void setRowNumber(int row);
    void setSeatCharacter(char seat);
};



#endif //SEAT_H
