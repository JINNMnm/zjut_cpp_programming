// Point���ʵ�� point.cpp
#include "../hpp/point.hpp"
Point::Point(float a, float b) //��x,y��ʼ��
{
    x = a;
    y = b;
}

//����x��y������ֵ
void Point::setPoint(float a, float b) //Ϊx,y����ֵ
{
    x = a;
    y = b;
}

void Point::display(ostream &out) const
{
    cout << "Point:" << x << "," << y << endl;
}


