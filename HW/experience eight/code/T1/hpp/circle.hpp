#ifndef CIRCLE_H
#define CIRCLE_H
#include "point.hpp"
// Circle�������  circle.h
class Circle : public Point
{
public:
  Circle(float x = 0, float y = 0, float r = 0); //���캯��
  void setRadius(float);                         //���ð뾶ֵ
  float getRadius() const;                       //��ȡ�뾶ֵ
  virtual float area() const;                    //����Բ���
  void display(ostream &out) const;
  //friend ostream &operator<<(ostream &, const Circle &); //������������
protected:
  float radius;
};
#endif