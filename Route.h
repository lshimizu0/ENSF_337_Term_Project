//
// Class stores information for airplane route
//

#ifndef ROUTE_H
#define ROUTE_H
#include <string>

using namespace std;

class Route {
public:
    Route(string source, string destination) {
        this->source = source;
        this->destination = destination;
    };
    Route() {
        this->source = "";
        this->destination = "";
    };
    string getSource() {
        return source;
    }
    string getDestination() {
        return destination;
    }
    void setSource(string source) {
        this->source = source;
    }
    void setDestination(string destination) {
        this->destination = destination;
    }
    private:
    string source;
    string destination;
};



#endif //ROUTE_H
