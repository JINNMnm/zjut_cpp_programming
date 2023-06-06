#include "../hpp/Vehicle.hpp"
#include <iostream>
#include <string>
using namespace std;

// Constructors
Vehicle::Vehicle(int doors, int cylinders, int transmission_type, string color, double fuel_level):
    doors(doors), cylinders(cylinders), transmission_type(transmission_type), color(color), fuel_level(fuel_level)
{
 
}

// Getters

string Vehicle::getColor() const
{
    return color;
}

int Vehicle::getCylinders() const
{
    return cylinders;
}

int Vehicle::getDoors() const
{
    return doors;
}

double Vehicle::getFuelLevel() const
{
    return fuel_level;
}

int Vehicle::getTransmissionType() const
{
    return transmission_type;
}

// Setters
void Vehicle::setColor(string color)
{
    this->color = color;
}

void Vehicle::setCylinders(int cylinders)
{
    this->cylinders = cylinders;
}

void Vehicle::setDoors(int doors)
{
    this->doors = doors;
}

void Vehicle::setFuelLevel(double fuel_level)
{
    this->fuel_level = fuel_level;
}

void Vehicle::setTransmissionType(int transmission_type)
{
    this->transmission_type = transmission_type;
}

void Vehicle::print()const{
    cout << "Vehicle: " << endl;
    cout << "   Number of doors: " << doors << endl;
    cout << "   Number of cylinders: " << cylinders << endl;
    cout << "   Transmission type: " << transmission_type << endl;
    cout << "   Color: " << color << endl;
    cout << "   Fuel level: " << fuel_level << endl;
}

