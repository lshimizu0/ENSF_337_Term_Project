// Filename: File_Reader.h
// Purpose: Declare functions used to read flight and passenger data
//          from text files into program structures.

#ifndef FILE_READER_H
#define FILE_READER_H

#include <vector>
#include <fstream>
#include "Flight.h"
#include "Passenger.h"
#include "Airline.h"

using namespace std;

/*
 * Function: read_flights_from_file
 * PURPOSE: Read flight definitions from a text file and create the corresponding
 *          Flight objects. Returns a vector containing all Flight objects read from the file.
 * REQUIRES: file_name = the name of the file containing flight information
 *           airline = reference to an Airline object, which will also receive
 *                     the created Flight objects
 */
vector<Flight> read_flights_from_file(string file_name, Airline &airline);

/*
 * Function: read_passengers_from_file
 * PURPOSE: Read passenger records from a text file and associate passengers with
 *          their flights and seats. Returns a vector containing all Passenger objects read from the file.
 * REQUIRES: file_name = the name of the passenger data file
 *           flights = reference to a vector of Flight objects that passengers
 *                     will be matched with
 */
vector<Passenger> read_passengers_from_file(string file_name, vector<Flight> &flights);

#endif // FILE_READER_H