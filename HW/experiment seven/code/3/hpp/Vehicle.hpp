#ifndef VEHICLE_HPP
#define VEHICLE_HPP
#include <string>
using namespace std;
class Vehicle
{
    public:
        // Constructors
        Vehicle(int = 0, int = 0, int = 0, string ="", double = 0.0);
        // Getters
        int getDoors() const;
        int getCylinders() const;
        int getTransmissionType() const;
        string getColor() const;
        double getFuelLevel() const;
        // Setters
        void setDoors(int);
        void setCylinders(int);
        void setTransmissionType(int);
        void setColor(string);
        void setFuelLevel(double);
        // Other
        void print() const;
    protected:
        int doors;
        int cylinders;
        int transmission_type;
        string color;
        double fuel_level;
};


#endif