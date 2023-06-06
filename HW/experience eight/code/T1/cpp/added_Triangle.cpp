#include "../hpp/added_Triangle.hpp"
#include <iostream>
#include <math.h>
using namespace std;

Triangle::Triangle(float x1, float y1, float x2, float y2, float x3, float y3) : point1(x1, y1), point2(x2, y2), point3(x3, y3)
{
    //���캯��
}

void Triangle::setpoint1(float x, float y)
{
    //���������ε�һ����
    point1.setPoint(x, y);
}

void Triangle::setpoint2(float x, float y)
{
    //���������εڶ�����
    point2.setPoint(x, y);
}

void Triangle::setpoint3(float x, float y)
{
    //���������ε�������
    point3.setPoint(x, y);
}

float Triangle::getpoint1x() const
{
    //��ȡ�����ε�һ�����x����
    return point1.getX();
}

float Triangle::getpoint1y() const
{
    //��ȡ�����ε�һ�����y����
    return point1.getY();
}

float Triangle::getpoint2x() const
{
    //��ȡ�����εڶ������x����
    return point2.getX();
}

float Triangle::getpoint2y() const
{
    //��ȡ�����εڶ������y����
    return point2.getY();
}

float Triangle::getpoint3x() const
{
    //��ȡ�����ε��������x����
    return point3.getX();
}

float Triangle::getpoint3y() const
{
    //��ȡ�����ε��������y����
    return point3.getY();
}

float Triangle::getdistance12() const
{
    //��ȡ�����ε�һ���ߵĳ���
    return sqrt((point1.getX() - point2.getX()) * (point1.getX() - point2.getX()) + (point1.getY() - point2.getY()) * (point1.getY() - point2.getY()));
}

float Triangle::getdistance13() const
{
    //��ȡ�����εڶ����ߵĳ���
    return sqrt((point1.getX() - point3.getX()) * (point1.getX() - point3.getX()) + (point1.getY() - point3.getY()) * (point1.getY() - point3.getY()));
}

float Triangle::getdistance23() const
{
    //��ȡ�����ε������ߵĳ���
    return sqrt((point2.getX() - point3.getX()) * (point2.getX() - point3.getX()) + (point2.getY() - point3.getY()) * (point2.getY() - point3.getY()));
}

float Triangle::area() const
{
    //�������������
    float s = (getdistance12() + getdistance13() + getdistance23()) / 2;
    return sqrt(s * (s - getdistance12()) * (s - getdistance13()) * (s - getdistance23()));
}

float Triangle::volume() const
{
    //�������������
    return 0;
}