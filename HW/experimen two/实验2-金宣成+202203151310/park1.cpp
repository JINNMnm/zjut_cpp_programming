#include "DateTime1 .h"
#include <iostream>
using namespace std;
double Fee(double a,double b){
    double sum = 0;
    sum = b * 4 + a * 30;
    if(a > 365)return sum * 0.8;
    if(a > 30) return sum * 0.9;
    return sum;
}
int main(){
    Time arrive1,leave1;
    Date arrive2,leave2;
    arrive2.set_date();
    arrive1.set_time();
    leave2.set_date();  
    leave1.set_time();
    cout << "arrive date£º";
    arrive2.show_date();
    cout << endl <<"arrive time: ";
    arrive1.show_time();
    cout << "leave date: ";
    leave2.show_date();
    cout << endl << "leave time: ";
    leave1.show_time();
    cout << "leavedate:" << leave2.diff(arrive2) << "days  and  leavetime:" << leave1.diff(arrive1) << "hours" << endl;
    double F = Fee(leave2.diff(arrive2) , leave1.diff(arrive1));
    cout << "toltal Fee is :" << F << endl;
    return 0;
}