#ifndef ADDED_TRIANGLE_H
#define ADDED_TRIANGLE_H
#include "point.hpp"

class Triangle
{
public:
    Triangle(float = 0, float = 0, float = 0, float = 0, float = 0, float = 0); //���캯��
    void setpoint1(float, float);                                               //���������ε�һ����
    void setpoint2(float, float);                                               //���������εڶ�����
    void setpoint3(float, float);                                               //���������ε�������
    float getpoint1x() const;                                                   //��ȡ�����ε�һ�����x����
    float getpoint1y() const;                                                   //��ȡ�����ε�һ�����y����
    float getpoint2x() const;                                                   //��ȡ�����εڶ������x����
    float getpoint2y() const;                                                   //��ȡ�����εڶ������y����
    float getpoint3x() const;                                                   //��ȡ�����ε��������x����
    float getpoint3y() const;                                                   //��ȡ�����ε��������y����
    float getdistance12() const;                                                //��ȡ�����ε�һ���ߵĳ���
    float getdistance13() const;                                                //��ȡ�����εڶ����ߵĳ���
    float getdistance23() const;                                                //��ȡ�����ε������ߵĳ���
    float area() const;                                                         //�������������
    float volume() const;                                                       //�������������
protected:
    Point point1;
    Point point2;
    Point point3;
};

#endif