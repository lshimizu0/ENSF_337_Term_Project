// Filename: File_Reader.h
// Purpose: Declare functions use to read flight and passenger information
// from input files.

#ifndef FILE_READER_H
#define FILE_READER_H

#include <vector>
#include <fstream>
#include "Flight.h"
#include "Passenger.h"
#include "Airline.h"

using namespace std;

vector<Flight> read_flights_from_file(string file_name, Airline &airline);
/* */

vector<Passenger> read_passengers_from_file(string file_name, vector<Flight> &flights);




#endif //FILE_READER_H
