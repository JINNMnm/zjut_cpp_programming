#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class shape
{
public:
  virtual float area(){return 0;}
};

// Point������� point.h
class Point: virtual public shape
{
public:
  Point(float x = 0, float y = 0); //��Ĭ�ϲ����Ĺ��캯��
  void setPoint(float, float);     //��������ֵ
  float getX() const { return x; } //��x����
  float getY() const { return y; } //��y����
  virtual void display(ostream &out) const;
  virtual float area() const { return 0; } //�������
protected:                                 //�ܱ�����Ա
  float x, y;
};

#endif
