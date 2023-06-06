// How to Program
// Debugging Problem (dog.hpp)

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog : public Animal
{
public:
   Dog(const int, const int, const char * = "Toto");
   Dog(const char * = "Toto");
   Dog(const Animal &);
   void Print() const;
   void setName(const char *);
   Dog& operator=(const Animal &);

private:
   char name[30];
};

#endif
