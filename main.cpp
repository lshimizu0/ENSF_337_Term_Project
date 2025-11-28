#include <iostream>
#include <vector>

#include "Flight.h"

using namespace std;
int main()
{
    // Read From file here
    vector<Flight> flights;
    flights.push_back(Flight("AC101", Route("Calgary", "Vancouver"), 20, 6));
    flights.push_back(Flight("AC202", Route("Calgary", "Toronto"), 25, 6));
    flights.push_back(Flight("WS303", Route("Edmonton", "Calgary"), 15, 4));
    flights.push_back(Flight("WS404", Route("Vancouver", "Edmonton"), 18, 5));
    flights.push_back(Flight("DL505", Route("Seattle", "Calgary"), 22, 6));
    flights.push_back(Flight("UA606", Route("Denver", "Calgary"), 24, 6));
    flights.push_back(Flight("AA707", Route("Chicago", "Calgary"), 21, 6));
    flights.push_back(Flight("AC808", Route("Montreal", "Calgary"), 28, 6));
    flights.push_back(Flight("WS909", Route("Winnipeg", "Calgary"), 16, 4));
    flights.push_back(Flight("AC010", Route("Calgary", "Halifax"), 26, 6));

    // User Interface
    cout << "FMAS Version 1.0\n"
            "Term Project - Flight Management Application System\n"
            "Produced by group#: 9\n"
            "Names: Lucas Shimizu, Eric Hallett, Nnamdi Onaga\n\n "
            "<<<Press Return to Continue>>>";
    cin.get();

    int choice;
    cout << "Please select one of the following options\n"
            "1. Select a flight\n"
            "2. Display Flight Seat Map\n"
            "3. Display Passengers Information\n"
            "4. Add a New Passenger\n"
            "5. Remove an Existing Passenger\n"
            "6. Save Data\n"
            "7. Quit\n"
            "Enter your choice(1-7): ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Here is the list of available flights. Please select one:\n";
        for (int i = 0; i < flights.size(); i++)
        {
            cout << i + 1 << ". " << flights.at(i).get_flight_id() << " " << flights.at(i).get_route().getSource() << " " << flights.at(i).get_route().getDestination() << " " << flights.at(i).get_number_of_rows() << " " << flights.at(i).get_number_of_seats_per_row() << endl;
        }
        cout << "Enter your choice: ";
        cin >> choice;
        choice--;
        cout << "You have selected flight " << flights.at(choice).get_flight_id() << " from " << flights.at(choice).get_route().getSource() << " to " << flights.at(choice).get_route().getDestination() << endl;
        cout << "\n<<<Press Return to continue>>>";
        break;
    case 2:
        cout << "Aircraft Seat Map for flight " << flights.at(choice).get_flight_id() << endl;
        break;
    case 3:
        cout << "Case 3";
        break;
    case 4:
        cout << "Case 4";
        break;
    case 5:
        cout << "Case 5";
        break;
    case 6:
        cout << "Case 6";
        break;
    case 7:
        cout << "Case 7";
        break;
    }

    return 0;
}
