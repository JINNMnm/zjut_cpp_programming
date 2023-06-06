#ifndef ADDED_SPHERE_H
#define ADDED_SPHERE_H
#include "circle.hpp"

class Sphere:public Circle{
    public:
        Sphere(float = 0,float = 0,float = 0,float = 0);//构造函数
        void setHeight(float);//设置球体高
        float getHeight() const;//读取球体高
        float area() const;//计算球体表面积
        float volume() const;//计算球体体积
    protected:
        float height;
};



#endif