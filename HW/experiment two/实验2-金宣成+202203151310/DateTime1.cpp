#include "DateTime1 .h"
#include <iostream>
 using namespace std;
void Time::set_time(){
    do{
        cin >> hour >> minute ;
    }while( hour < 0 or hour > 24 or minute > 60 or minute < 0);
}
void Time::show_time(){
    cout << hour << ':' << minute << endl;
}
//time normalize
long Time::normalize() const {
    return hour * 60 + minute;
}
double Time::diff(const Time& T){
    long d = normalize() - T.normalize() - 60;
    int h = d / 60,m = d % 60;
    if(d < 0)return 0;
    if(m < 15) return h;
    if(m >= 15 and m <= 30) return h + 0.5;
    if(m > 30) return h + 1;
}
void Date::set_date(){
    cin >> year >> month >> date;
}
void Date::show_date(){
    cout << year << ';' << month << ';' << date << endl;
}
//date normalize
long Date::normalize() const{
    return (year - 2020) + month * 30 + date;
}
double Date::diff(const Date& T){
    return normalize() - T.normalize();
}