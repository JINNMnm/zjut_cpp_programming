#include "../hpp/added_Sphere.hpp"
#include <iostream>
using namespace std;

Sphere::Sphere(float x,float y,float radius,float height):Circle(x,y,radius),height(height)
{
    //构造函数
}

void Sphere::setHeight(float height)
{
    //设置球体高
    this->height = height;
}

float Sphere::getHeight() const
{
    //读取球体高
    return height;
}

float Sphere::area() const
{
    //计算球体表面积
    return 4*3.14159*radius*radius;
}

float Sphere::volume() const
{
    //计算球体体积
    return 4*3.14159*radius*radius*radius/3;
}

ostream &operator<<(ostream &output,const Sphere &s)
{
    //重载输出运算符
    output<<"["<<s.getX()<<","<<s.getY()<< "," << s.getHeight() << "]"<<endl;
    output<<"radius = "<<s.getRadius()<<endl;
    output<<"height = "<<s.getHeight()<<endl;
    output<<"area = "<<s.area()<<endl;
    output<<"volume = "<<s.volume()<<endl;
    return output;
}