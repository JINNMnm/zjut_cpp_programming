//student2.cpp  在此给出student2的实现
#include <cstring>
#include "student2.h"
Student::Student() {
    name = new char[1];
    name[0] = '\0';
}
Student::Student(const char *n) {
    int length = strlen(n);
    name = new char[length + 1];
    strcpy(name, n);
}
Student::Student(const Student & other) {
    int length = strlen(other.name);
    name = new char[length + 1];
    strcpy(name, other.name);
}
Student& Student::operator =(const Student& right) {
    delete[] name;
    int length = strlen(right.name);
    name = new char[length + 1];
    strcpy(name, right.name);
    return *this;
}
Student::~Student() {
    delete[] name;
}
char * Student::GetName() {
    return name;
}
void Student::ChangeName(const char *n) {
    delete[] name;
    int length = strlen(n);
    name = new char[length + 1];
    strcpy(name, n);
}
