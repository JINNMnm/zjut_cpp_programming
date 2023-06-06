#include "../hpp/added_Rect.hpp"
#include <iostream>

using namespace std;

Rect::Rect(float x,float y,float length,float width):Point(x,y),length(length),width(width)
{
    //���캯��
}

void Rect::setLength(float length)
{
    //���þ��γ�
    this->length = length;
}

float Rect::getLength() const
{
    //��ȡ���γ�
    return length;
}

void Rect::setWidth(float width)
{
    //���þ��ο�
    this->width = width;
}

float Rect::getWidth() const
{
    //��ȡ���ο�
    return width;
}

float Rect::area() const
{
    //����������
    return length*width;
}
