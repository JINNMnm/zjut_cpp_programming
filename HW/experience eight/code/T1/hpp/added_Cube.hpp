#ifndef ADDED_CUBE_H
#define ADDED_CUBE_H
#include "added_Rect.hpp"

class Cube : public Rect
{
    public:
        Cube(float = 0,float = 0,float = 0,float = 0,float = 0);//���캯��
        void setHeight(float);//�����������
        float getHeight() const;//��ȡ�������
        float area() const;//��������������
        float volume() const;//�������������
    protected:
        float height;
};

#endif 