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

// Function:
// REQUIRES: file_name = the name of the file containing flight information
//           airline = references to an Airplane object, which will also receive
//           the created Flight objects
// PROMISES: Read flight defintions from a text file and create the corresponding Flight objects.
// Returns a vector containing all Flight objects read from the file.
vector<Flight> read_flights_from_file(string file_name, Airline &airline);

// Function:
// REQUIRES: file_name = the name of the passenger data file
//           flights = reference to a vector of Flight objects that passengers will be matched with
// PROMISES: Read passenger records from a text file and associate passengers with their flights and seats.
// Returns a vector containing all Passenger objects read from the file.
vector<Passenger> read_passengers_from_file(string file_name, vector<Flight> &flights);

#endif //FILE_READER_H
