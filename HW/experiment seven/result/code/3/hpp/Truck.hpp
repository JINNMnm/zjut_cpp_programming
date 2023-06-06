#ifndef TRUCK_HPP
#define TRUCK_HPP
#include "Vehicle.hpp"

class Truck:public Vehicle
{
    public:
        // Constructors
        Truck(int = 0, int = 0, int = 0, string ="", double = 0.0, bool = false);
        // Getters
        bool getCargo() const;
        // Setters
        void setCargo(bool);
        // Other
        void print() const;
    protected:
        bool cargo;
};




#endif