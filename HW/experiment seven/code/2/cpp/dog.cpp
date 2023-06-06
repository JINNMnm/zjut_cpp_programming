// C++ How to Program
// Debugging Problem (dog.cpp)

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

#include "../hpp/dog.hpp"

Dog::Dog(const int h, const int w, const char *n) : Animal(h, w)
{
   strcpy(name, n);
}

Dog::Dog(const char *n)
{
   strcpy(name, n);
}

Dog::Dog(const Animal &a) : Animal(a) { strcpy(name, "Toto"); }


void Dog::setName(const char *n) { strcpy(name, n); }

void Dog::Print() const
{
   cout << "The person is named: " << name << endl;
   print();
}

Dog& Dog::operator=(const Animal &a)
{
   //height 和 weight 是 private 的，所以不能直接访问
   //height = a.height;是错误的
   //weight = a.weight;是错误的
   Dog temp(a);
   *this = temp;
   return *this;
}