#include "../hpp/added_Triangle.hpp"
#include <iostream>
#include <math.h>
using namespace std;

Triangle::Triangle(float x1, float y1, float x2, float y2, float x3, float y3) : point1(x1, y1), point2(x2, y2), point3(x3, y3)
{
    //构造函数
}

void Triangle::setpoint1(float x, float y)
{
    //设置三角形第一个点
    point1.setPoint(x, y);
}

void Triangle::setpoint2(float x, float y)
{
    //设置三角形第二个点
    point2.setPoint(x, y);
}

void Triangle::setpoint3(float x, float y)
{
    //设置三角形第三个点
    point3.setPoint(x, y);
}

float Triangle::getpoint1x() const
{
    //读取三角形第一个点的x坐标
    return point1.getX();
}

float Triangle::getpoint1y() const
{
    //读取三角形第一个点的y坐标
    return point1.getY();
}

float Triangle::getpoint2x() const
{
    //读取三角形第二个点的x坐标
    return point2.getX();
}

float Triangle::getpoint2y() const
{
    //读取三角形第二个点的y坐标
    return point2.getY();
}

float Triangle::getpoint3x() const
{
    //读取三角形第三个点的x坐标
    return point3.getX();
}

float Triangle::getpoint3y() const
{
    //读取三角形第三个点的y坐标
    return point3.getY();
}

float Triangle::getdistance12() const
{
    //读取三角形第一条边的长度
    return sqrt((point1.getX() - point2.getX()) * (point1.getX() - point2.getX()) + (point1.getY() - point2.getY()) * (point1.getY() - point2.getY()));
}

float Triangle::getdistance13() const
{
    //读取三角形第二条边的长度
    return sqrt((point1.getX() - point3.getX()) * (point1.getX() - point3.getX()) + (point1.getY() - point3.getY()) * (point1.getY() - point3.getY()));
}

float Triangle::getdistance23() const
{
    //读取三角形第三条边的长度
    return sqrt((point2.getX() - point3.getX()) * (point2.getX() - point3.getX()) + (point2.getY() - point3.getY()) * (point2.getY() - point3.getY()));
}

float Triangle::area() const
{
    //计算三角形面积
    float s = (getdistance12() + getdistance13() + getdistance23()) / 2;
    return sqrt(s * (s - getdistance12()) * (s - getdistance13()) * (s - getdistance23()));
}

float Triangle::volume() const
{
    //计算三角形体积
    return 0;
}