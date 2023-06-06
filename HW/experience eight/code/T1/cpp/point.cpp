// Point类的实现 point.cpp
#include "../hpp/point.hpp"
Point::Point(float a, float b) //对x,y初始化
{
    x = a;
    y = b;
}

//设置x和y的坐标值
void Point::setPoint(float a, float b) //为x,y赋新值
{
    x = a;
    y = b;
}

void Point::display(ostream &out) const
{
    cout << "Point:" << x << "," << y << endl;
}


