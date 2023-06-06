#ifndef ADDED_RECT_H
#define ADDED_RECT_H
#include "point.hpp"


class Rect:public Point
{
    public:
        Rect(float = 0,float = 0,float = 0,float =0);//构造函数
        void setLength(float);//设置矩形长
        float getLength() const;//读取矩形长
        void setWidth(float);//设置矩形宽
        float getWidth() const;//读取矩形宽
        float area() const;//计算矩形面积
    protected:
        float length;
        float width;
};


#endif