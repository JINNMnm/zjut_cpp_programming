#ifndef ADDED_RECT_H
#define ADDED_RECT_H
#include "point.hpp"


class Rect:public Point
{
    public:
        Rect(float = 0,float = 0,float = 0,float =0);//���캯��
        void setLength(float);//���þ��γ�
        float getLength() const;//��ȡ���γ�
        void setWidth(float);//���þ��ο�
        float getWidth() const;//��ȡ���ο�
        float area() const;//����������
    protected:
        float length;
        float width;
};


#endif