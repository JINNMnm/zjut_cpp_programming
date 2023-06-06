#include "../hpp/cylinder.hpp"
// Cylinder���ʵ�� cylinder.cpp
Cylinder::Cylinder(float a, float b, float r, float h) : Circle(a, b, r), height(h) {}

void Cylinder::setHeight(float h) //����Բ����
{
   height = h;
}

float Cylinder::getHeight() const //��ȡԲ����
{
   return height;
}

float Cylinder::area() const //����Բ�������
{
   return 2 * Circle::area() + 2 * 3.14159 * radius * height;
}

float Cylinder::volume() const //����Բ�������
{
   return Circle::area() * height;
}


void Cylinder::display(ostream& out)const{
   cout << "Cylinder:" << x << "," << y << ";radius:" << radius << ";area:" << area() << ";volume:" << volume() << endl;
}

/*
ostream &operator<<(ostream &output, const Cylinder &cy)
{
   output << "Center=[" << cy.x << "," << cy.y << "],r=" << cy.radius
          << ",h=" << cy.height << "\n area=" << cy.area()
          << ",volume=" << cy.volume() << endl;
   return output;
}
*/