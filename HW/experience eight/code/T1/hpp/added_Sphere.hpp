#ifndef ADDED_SPHERE_H
#define ADDED_SPHERE_H
#include "circle.hpp"

class Sphere:public Circle{
    public:
        Sphere(float = 0,float = 0,float = 0,float = 0);//���캯��
        void setHeight(float);//���������
        float getHeight() const;//��ȡ�����
        float area() const;//������������
        float volume() const;//�����������
    protected:
        float height;
};



#endif