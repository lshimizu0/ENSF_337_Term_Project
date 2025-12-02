//
// Class stores information for airplane route
//

#ifndef ROUTE_H
#define ROUTE_H
#include <string>

using namespace std;

class Route
{
public:
    Route(string source, string destination)
    {
        // REQUIRES: source and destination are non-empty strings
        // PROMISES: initializes the Route object with the given source and destination
        this->source = source;
        this->destination = destination;
    };
    Route()
    {
        // REQUIRES: nothing
        // PROMISES: initializes the Route object with empty source and destination
        this->source = "";
        this->destination = "";
    };
    string getSource()
    // REQUIRES: nothing
    // PROMISES: returns the source of the route
    {
        return source;
    }
    string getDestination()
    {
        // REQUIRES: nothing
        // PROMISES: returns the destination of the route
        return destination;
    }
    void setSource(string source)
    {
        // REQUIRES: source is a non-empty string
        // PROMISES: sets the source of the route to the given value
        this->source = source;
    }
    void setDestination(string destination)
    {
        // REQUIRES: destination is a non-empty string
        // PROMISES: sets the destination of the route to the given value
        this->destination = destination;
    }

private:
    string source;
    string destination;
};

#endif // ROUTE_H
