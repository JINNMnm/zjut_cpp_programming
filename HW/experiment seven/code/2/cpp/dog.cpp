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
   //height �� weight �� private �ģ����Բ���ֱ�ӷ���
   //height = a.height;�Ǵ����
   //weight = a.weight;�Ǵ����
   Dog temp(a);
   *this = temp;
   return *this;
}