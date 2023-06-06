#include "../hpp/added_Rect.hpp"
#include <iostream>

using namespace std;

Rect::Rect(float x,float y,float length,float width):Point(x,y),length(length),width(width)
{
    //构造函数
}

void Rect::setLength(float length)
{
    //设置矩形长
    this->length = length;
}

float Rect::getLength() const
{
    //读取矩形长
    return length;
}

void Rect::setWidth(float width)
{
    //设置矩形宽
    this->width = width;
}

float Rect::getWidth() const
{
    //读取矩形宽
    return width;
}

float Rect::area() const
{
    //计算矩形面积
    return length*width;
}
