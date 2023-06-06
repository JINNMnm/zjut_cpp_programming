#include <iostream>
#include "position.hpp"
#include <cmath>
using namespace std;
position::position(double a = 0, double b = 0)
{
    x = a;
    y = b;
}
position::position(double a = 0){
    x = a;
}
position::position(){
}
void position::set(double a,double b){
    x = a;
    y = b;
}
void position::set(){
    x = 0;y = 0;
}
void position::show(){
    cout << "x = " << x << "   " << "y = " << y << endl;
}
double position::Distance(const position& a) const{
    return sqrt((a.x-x) * (a.x-x) + (a.y-y)*(a.y-y));
}
double position::Distance() const{
    return sqrt(x*x + y*y);
}
double position::slope(){
    return y/x;
}
double position::slope(const position & a) const{
    return (a.y - y)/(a.x - x);
}
void position::move(double a){
    x += a;
}
void position::move(double a ,double b){
    x += a;
    y += b;
}
position::~position()
{
}
