#include <iostream>
#include "../hpp/Truck.hpp"
using namespace std;

// Constructors
Truck::Truck(int doors, int cylinders, int transmission_type, string color, double fuel_level, bool cargo):
    Vehicle(doors, cylinders, transmission_type, color, fuel_level), cargo(cargo)
{
 
}

// Getters
bool Truck::getCargo() const
{
    return cargo;
}

// Setters
void Truck::setCargo(bool cargo)
{
    this->cargo = cargo;
}

// Other
void Truck::print() const
{
    cout << "Truck: " << endl;
    cout << "   Doors: " << doors << endl;
    cout << "   Cylinders: " << cylinders << endl;
    cout << "   Transmission Type: " << transmission_type << endl;
    cout << "   Color: " << color << endl;
    cout << "   Fuel Level: " << fuel_level << endl;
    if(cargo){
        cout << "   The truck is carrying cargo" << endl;
    }else{
        cout << "   The truck is not carrying cargo" << endl;
    }
}