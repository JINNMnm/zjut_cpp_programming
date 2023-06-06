#include "DateTime.h"
#include <iostream>
using namespace std;
void DateTime::set_time(){
    do{
        cin >> year >> month >> date >> hour >> minute ;
    }while(month < 0 or month > 31 or hour < 0 or hour > 24);
}
void DateTime::show_time(){
    cout << year << ':' << month << ':' << date << ':' << hour << ':' << minute << endl;
}
long DateTime::normalize1() const {
    return hour * 60 + minute;
}
long DateTime::normalize2() const {
    return (year - 2020) * 365 + month * 30 + date;
}
double DateTime::diff1(const DateTime& T){
    long d = normalize1() - T.normalize1() - 60;
    int h = d / 60,m = d % 60;
    if(d < 0)return 0;
    if(m < 15) return h;
    if(m >= 15 and m <= 30) return h + 0.5;
    if(m > 30) return h + 1;
}
int DateTime::diff2(DateTime& T){
    return normalize2() - T.normalize2();
}