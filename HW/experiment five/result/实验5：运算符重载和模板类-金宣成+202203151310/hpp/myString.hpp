#ifndef MYSTRING_HPP
#define MYSTRING_HPP
#include <iostream>
using namespace std;
class myString
{
public:
   //根据测试程序写构造函数原型
   //无参构造函数
   myString() ;

   //拷贝构造函数
   myString(const char* str,int s,int end);

   //有参构造函数
   myString(int len,const char r);

   //有参构造函数
   myString(const char* r);

   //拷贝构造函数
   myString(const myString& right);
   
   //显示字符串
   void display() const; 

   //输入字符串
   void input();      

   //求字符串长度
   int len() const;  

   //补充下标重载运算
   char& operator[](int i);

   //字符串等于比较
   friend int operator==(const myString &a, const myString &b);     

   //字符串大于比较
   friend int operator>(const myString &a, const myString &b);      

   //字符串拼接
   friend myString operator+(const myString &a, const myString &b); 

   //输出流重载运算
   friend ostream& operator<<(ostream& out,const myString& right);

   //输入流重载运算
   friend istream& operator>>(istream& in,myString& right);

   //补充赋值重载运算
   myString& operator=(const myString&right);
   myString& operator=(const char * right);

   //后置自增重载运算
   myString operator++(int);

   //类型转换
   operator const char*();

   //获取字符串长度
   int get_size() const;

   //补充析构函数
   ~myString();
private:
   char *str;
   int size;
};

//考虑为myString添加输入输出流重载
ostream& operator<<(ostream& out,const myString& right);
istream& operator>>(istream& in, myString& right);  
#endif