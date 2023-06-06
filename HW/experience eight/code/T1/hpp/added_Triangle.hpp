#ifndef ADDED_TRIANGLE_H
#define ADDED_TRIANGLE_H
#include "point.hpp"

class Triangle
{
public:
    Triangle(float = 0, float = 0, float = 0, float = 0, float = 0, float = 0); //构造函数
    void setpoint1(float, float);                                               //设置三角形第一个点
    void setpoint2(float, float);                                               //设置三角形第二个点
    void setpoint3(float, float);                                               //设置三角形第三个点
    float getpoint1x() const;                                                   //读取三角形第一个点的x坐标
    float getpoint1y() const;                                                   //读取三角形第一个点的y坐标
    float getpoint2x() const;                                                   //读取三角形第二个点的x坐标
    float getpoint2y() const;                                                   //读取三角形第二个点的y坐标
    float getpoint3x() const;                                                   //读取三角形第三个点的x坐标
    float getpoint3y() const;                                                   //读取三角形第三个点的y坐标
    float getdistance12() const;                                                //读取三角形第一条边的长度
    float getdistance13() const;                                                //读取三角形第二条边的长度
    float getdistance23() const;                                                //读取三角形第三条边的长度
    float area() const;                                                         //计算三角形面积
    float volume() const;                                                       //计算三角形体积
protected:
    Point point1;
    Point point2;
    Point point3;
};

#endif