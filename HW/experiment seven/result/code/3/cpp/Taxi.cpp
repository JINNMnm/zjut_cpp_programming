#include "../hpp/Taxi.hpp"
#include <iostream>
#include <string>
using namespace std;

// Constructors
Taxi::Taxi(int doors, int cylinders, int transmission_type, string color, double fuel_level, bool passengers):
    Vehicle(doors, cylinders, transmission_type, color, fuel_level), passengers(passengers)
{
 
}

// Getters
bool Taxi::getCustomers() const
{
    return passengers;
}

// Setters
void Taxi::setCustomers(bool passengers)
{
    this->passengers = passengers;
}

// Other
void Taxi::print() const
{
    cout << "Taxi: " << endl;
    cout << "   Doors: " << doors << endl;
    cout << "   Cylinders: " << cylinders << endl;
    cout << "   Transmission Type: " << transmission_type << endl;
    cout << "   Color: " << color << endl;
    cout << "   Fuel Level: " << fuel_level << endl;
    if(passengers){
        cout << "   The taxi has passengers" << endl;
    }else{
        cout << "   The taxi has no passengers" << endl;
    }
}