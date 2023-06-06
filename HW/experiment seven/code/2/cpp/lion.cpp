// C++ How to Program
// Debugging Problem (lion.cpp)

#include <iostream>

using std::cout;
using std::endl;

#include "../hpp/lion.hpp"

Lion::Lion(const int h, const int w): Animal(h, w)
{
}

void Lion::print() const
{
   cout << "This animal is a lion\n";
}
