#include "../hpp/added_Sphere.hpp"
#include <iostream>
using namespace std;

Sphere::Sphere(float x,float y,float radius,float height):Circle(x,y,radius),height(height)
{
    //���캯��
}

void Sphere::setHeight(float height)
{
    //���������
    this->height = height;
}

float Sphere::getHeight() const
{
    //��ȡ�����
    return height;
}

float Sphere::area() const
{
    //������������
    return 4*3.14159*radius*radius;
}

float Sphere::volume() const
{
    //�����������
    return 4*3.14159*radius*radius*radius/3;
}

ostream &operator<<(ostream &output,const Sphere &s)
{
    //������������
    output<<"["<<s.getX()<<","<<s.getY()<< "," << s.getHeight() << "]"<<endl;
    output<<"radius = "<<s.getRadius()<<endl;
    output<<"height = "<<s.getHeight()<<endl;
    output<<"area = "<<s.area()<<endl;
    output<<"volume = "<<s.volume()<<endl;
    return output;
}