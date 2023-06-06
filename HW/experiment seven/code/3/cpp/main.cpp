#include <iostream>
#include "../hpp/Vehicle.hpp"
#include "../hpp/Taxi.hpp"
#include "../hpp/Truck.hpp"

int main(){
    Vehicle vehicle1(2, 6, 3, "blue", 14.6);
    Taxi taxi1(4, 6, 5, "yellow", 3.3, false);
    Truck truck1(2, 16, 8, "black", 7.54, true);
    vehicle1.print();
    taxi1.print();
    truck1.print();
    return 0;
}