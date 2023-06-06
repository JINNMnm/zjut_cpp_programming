#ifndef TAXI_HPP
#define TAXI_HPP
#include <string>
#include "Vehicle.hpp"

class Taxi:public Vehicle
{
    public:
        // Constructors
        Taxi(int = 0, int = 0, int = 0, string ="", double = 0.0, bool = false);
        // Getters
        bool getCustomers() const;
        // Setters
        void setCustomers(bool);
        // Other
        void print() const;
    protected:
        bool passengers;
};


#endif
