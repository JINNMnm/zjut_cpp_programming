#include <iostream>
using namespace std;
class Date; //��Date�����ǰ��������
class Clock //����clock��
{
    public:
        Clock(int,int,int);
        void display(const Date&); //display�ǳ�Ա�������β���Date����������
    private:
        int hour;
        int minute;
        int second;
};

class Date //����Date��
{
    public:
        Date(int,int,int);
        int get_month() const{return month;}
        int get_day() const{return day;}
        int get_year() const{return year;}
        //friend void Clock::display(const Date&); //����clock�е�display����Ϊ��Ԫ��Ա����
    private:
        int month;
        int day;
        int year;
};