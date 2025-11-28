#include <iostream>
#include <iomanip>

#include "Airline.h"
#include "File_Reader.h"
#include "Flight.h"


using namespace std;
int main()
{
    //Read From file here
    Airline airline("Westjet");
    vector<Flight> flights = read_flights_from_file("flight.txt", airline);
    vector<Passenger> passengers = read_passengers_from_file("passengers.txt", flights);



    //User Interface
     cout<<"FMAS Version 1.0\n"
           "Term Project - Flight Management Application System\n"
           "Produced by group#: 9\n"
           "Names: Lucas Shimizu, Eric Hallett, Nnamdi Onaga\n\n "
           "<<<Press Return to Continue>>>";
     cin.get();

    while (true){
        int choice;
        cout<<"\nPlease select one of the following options\n"
              "1. Select a flight\n"
              "2. Display Flight Seat Map\n"
              "3. Display Passengers Information\n"
              "4. Add a New Passenger\n"
              "5. Remove an Existing Passenger\n"
              "6. Save Data\n"
              "7. Quit\n"
              "Enter your choice(1-7): ";
        cin>>choice;
        switch(choice) {
            case 1:
                cout<<"Here is the list of available flights. Please select one:\n";
                for(int i=0;i<flights.size();i++) {
                    cout<<i+1<<". "<<flights.at(i).get_flight_id()<<" "<<flights.at(i).get_route().getSource()<<" "<<flights.at(i).get_route().getDestination()<<" "<<flights.at(i).get_number_of_rows()<<" "<<flights.at(i).get_number_of_seats_per_row()<<endl;
                }
                cout<<"Enter your choice: ";
                cin >> choice;
                if(choice> flights.size() || choice < 1) {
                    cout<<"Invalid Input"<<endl;
                    break;
                }
                choice--;

                cout<<"You have selected flight "<<flights.at(choice).get_flight_id()<<" from "<<flights.at(choice).get_route().getSource()<<" to "<<flights.at(choice).get_route().getDestination()<<endl;
                cout<<"\n<<<Press Return to continue>>>";

                break;
            case 2:
                cout<<"Here is the list of available flights. Please select one:\n";
            for(int i=0;i<flights.size();i++) {
                cout<<i+1<<". "<<flights.at(i).get_flight_id()<<" "<<flights.at(i).get_route().getSource()<<" "<<flights.at(i).get_route().getDestination()<<" "<<flights.at(i).get_number_of_rows()<<" "<<flights.at(i).get_number_of_seats_per_row()<<endl;
            }
            cout<<"Enter your choice: ";
            cin >> choice;
            if(choice> flights.size() || choice < 1) {
                cout<<"Invalid Input"<<endl;
                break;
            }
            choice--;

            flights.at(choice).printSeatMap();
            break;
            case 3: {
                cout<<"Here is the list of available flights. Please select one:\n";
                for(int i=0;i<flights.size();i++) {
                    cout<<i+1<<". "<<flights.at(i).get_flight_id()<<" "<<flights.at(i).get_route().getSource()<<" "<<flights.at(i).get_route().getDestination()<<" "<<flights.at(i).get_number_of_rows()<<" "<<flights.at(i).get_number_of_seats_per_row()<<endl;
                }
                cout<<"Enter your choice: ";
                cin >> choice;
                if(choice> flights.size() || choice < 1) {
                    cout<<"Invalid Input"<<endl;
                    break;
                }
                choice--;
                vector<Passenger> passengers_choice = flights.at(choice).get_passengers();
                cout << left
                     << setw(12) << "First Name"
                     << setw(12) << "Last Name"
                     << setw(15) << "Phone"
                     << setw(6)  << "Row"
                     << setw(6)  << "Seat"
                     << setw(10) << "ID"
                     << endl;

                cout << "-------------------------------------------------------------" << endl;

                for (int i = 0; i < passengers_choice.size(); i++) {
                    cout << left
                         << setw(12) << passengers_choice.at(i).get_first_name()
                         << setw(12) << passengers_choice.at(i).get_last_name()
                         << setw(15) << passengers_choice.at(i).get_phone_number()
                         << setw(6)  << passengers_choice.at(i).get_seat()->get_row_number()
                         << setw(6)  << passengers_choice.at(i).get_seat()->get_seat_character()
                         << setw(10) << passengers_choice.at(i).get_id()
                         << endl;
                }
                break;
            }
            case 4: {
                string fname;
                string lname;
                string phone_number;
                int id;
                string plane_id;
                int row;
                char row_char;
                //USER PROOFING
                bool abort = false;
                cout<<"Please enter the passenger first name: ";
                cin>>fname;
                cout<<"Please enter the passenger last name: ";
                cin>>lname;
                cout<<"Please enter the passenger phone number(###-###-####): ";
                cin>>phone_number;
                cout<<"Please enter the passenger id: ";
                cin>>id;
                cout<<"Please enter plane id: ";
                cin>>plane_id;
                cout<<"Please enter row number: ";
                cin>>row;
                cout<<"Please enter desired seat: ";
                cin>>row_char;
                Passenger passenger(fname, lname, phone_number, id, plane_id);
                for(int i=0;i<flights.size();i++) {
                    if(flights.at(i).get_flight_id() == plane_id && flights.at(i).get_seat(row, row_char)->get_assigned()==false) {
                        if(row>flights[i].get_number_of_rows() || row<0 || row_char>flights[i].get_number_of_seats_per_row()+65 || row_char<65) {
                            abort = true;
                        }
                        flights.at(i).get_seat(row, row_char)->set_assigned(true);
                        passenger.set_seat(flights.at(i).get_seat(row, row_char));
                        flights.at(i).addPassenger(passenger);
                    }else if(flights.at(i).get_seat(row, row_char)->get_assigned()==true && flights.at(i).get_flight_id() == plane_id) {
                        abort = true;
                        break;
                    }
                }
                if(abort) {
                    cout<<"COMMAND FAILED!\nINPUT ERROR!\nABORTING.."<<endl;
                    break;
                }
                passengers.push_back(passenger);
                break;
                }
            case 5: {
                int id;
                bool abort = true;
                cout<<"Enter passenger id: ";
                cin>>id;
                for(int i=0;i<passengers.size();i++) {
                    if(passengers[i].get_id() == id) {
                        abort = false;
                        passengers[i].get_seat()->set_assigned(false);
                        for(int j=0;j<flights.size();j++) {
                            if(flights[j].get_flight_id() == passengers[i].get_flight_id()) {
                                flights[j].deletePassenger(id);
                                break;
                            }
                        }
                        passengers.erase(passengers.begin() + i);
                        break;
                    }
                }
                if(abort) {
                    cout<<"Passenger not found"<<endl;
                    break;
                }
                cout<<"Passenger id \""<<id<<"\" removed.";
                break;
            }

            case 6: {
                char chat;
                cout<<"Do you want to save the data in the \"flight_info.txt\" file? (y or n): ";
                cin>>chat;
                if(tolower(chat) != 'y') {
                    cout<<"Ok, Not saving";
                    break;
                }
                ofstream out("flight_info.txt");

                if (!out.is_open()) {
                    cout << "Error opening flight_info.txt\n";
                    break;
                }


                for (int i = 0; i < passengers.size(); i++) {
                    out << passengers[i].get_flight_id() << " "
                        << passengers[i].get_first_name() << " "
                        << passengers[i].get_last_name() << " "
                        << passengers[i].get_phone_number() << " "
                        << passengers[i].get_seat()->get_row_number()
                        << passengers[i].get_seat()->get_seat_character() << " "
                        << passengers[i].get_id();

                    if (i < passengers.size() - 1)
                        out << endl;
                }

                out.close();
                cout << "Data saved into flight_info.txt\n";
                break;
            }


            case 7:
                cout<<"Goodbye\n";
                exit(0);
            default:
                cout<<"Invalid Input\nTerminating"<<endl;
                exit(1);

        }
    }
}
