#include "../hpp/added_Cube.hpp"

Cube::Cube(float x,float y,float length,float width,float height):Rect(x,y,length,width),height(height)
{
    //���캯��
}

void Cube::setHeight(float height)
{
    //�����������
    this->height = height;
}

float Cube::getHeight() const
{
    //��ȡ�������
    return height;
}

float Cube::area() const
{
    //��������������
    return 2*(length*width+length*height+width*height);
}

float Cube::volume() const
{
    //�������������
    return length*width*height;
}

ostream &operator<<(ostream &output,const Cube &c)
{
    //������������
    output<<"["<<c.getX()<<","<<c.getY()<<"]"<<endl;
    output<<"length = "<<c.getLength()<<endl;
    output<<"width = "<<c.getWidth()<<endl;
    output<<"height = "<<c.getHeight()<<endl;
    output<<"area = "<<c.area()<<endl;
    output<<"volume = "<<c.volume()<<endl;
    return output;
}