#include "../hpp/circle.hpp"
// Circle���ʵ�� circle.cpp
Circle::Circle(float a, float b, float r) : Point(a, b), radius(r) {}
void Circle::setRadius(float r) //���ð뾶ֵ
{
    radius = r;
}

float Circle::getRadius() const //��ȡ�뾶ֵ
{
    return radius;
}

float Circle::area() const //����Բ���
{
    return 3.14159 * radius * radius;
}

void Circle::display(ostream &out) const
{
    cout << "Circle:" << x << "," << y << ";radius:" << radius << ";area:" << area() << endl;
}

/*
ostream &operator<<(ostream &output, const Circle &c)
{
    output << "Center=[" << c.x << "," << c.y << "],r=" << c.radius << ",area=" << c.area() << endl;
    return output;
}
*/

