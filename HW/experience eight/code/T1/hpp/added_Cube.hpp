#ifndef ADDED_CUBE_H
#define ADDED_CUBE_H
#include "added_Rect.hpp"

class Cube : public Rect
{
    public:
        Cube(float = 0,float = 0,float = 0,float = 0,float = 0);//构造函数
        void setHeight(float);//设置立方体高
        float getHeight() const;//读取立方体高
        float area() const;//计算立方体表面积
        float volume() const;//计算立方体体积
    protected:
        float height;
};

#endif 