#include "DateTime.h"
#include <iostream>
using namespace std;
double charge(double,double);
int main(){
    DateTime arrive,leave;
    arrive.set_time();
    leave.set_time();
    cout << "arrive time:" ;
    arrive.show_time();
    cout << "leave time:" ;
    leave.show_time();
    double Fee = charge(leave.diff1(arrive),leave.diff2(arrive));
    cout << "The toltal Fee is: " << Fee << endl;
    return 0;
}
double charge(double Time1,double Time2){
    double sum = 0;
    sum = Time1 * 4 + Time2 * 30;
    if(Time2 > 365){
        return sum * 0.8;
    }else if(Time2 > 30){
        return sum * 0.9;
    }else{
        return sum;
    }
}