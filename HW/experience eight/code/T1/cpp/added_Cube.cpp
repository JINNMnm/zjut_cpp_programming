#include "../hpp/added_Cube.hpp"

Cube::Cube(float x,float y,float length,float width,float height):Rect(x,y,length,width),height(height)
{
    //构造函数
}

void Cube::setHeight(float height)
{
    //设置立方体高
    this->height = height;
}

float Cube::getHeight() const
{
    //读取立方体高
    return height;
}

float Cube::area() const
{
    //计算立方体表面积
    return 2*(length*width+length*height+width*height);
}

float Cube::volume() const
{
    //计算立方体体积
    return length*width*height;
}

ostream &operator<<(ostream &output,const Cube &c)
{
    //重载输出运算符
    output<<"["<<c.getX()<<","<<c.getY()<<"]"<<endl;
    output<<"length = "<<c.getLength()<<endl;
    output<<"width = "<<c.getWidth()<<endl;
    output<<"height = "<<c.getHeight()<<endl;
    output<<"area = "<<c.area()<<endl;
    output<<"volume = "<<c.volume()<<endl;
    return output;
}