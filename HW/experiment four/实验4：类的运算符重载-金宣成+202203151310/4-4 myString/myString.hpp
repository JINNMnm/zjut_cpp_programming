#include <iostream>
using namespace std;
class myString
{
public:
   //根据测试程序写构造函数原型
   myString() ;
   myString(const char* str,int s,int end);
   myString(int len,const char r);
   myString(const char* r);
   void display() const; //显示字符串
   void input();                              //输入字符串
   int len() const;                           //求字符串长
   //补充下标重载运算
   char& operator[](int i);
   friend int operator==(const myString &a, const myString &b);     //字符串等于比较
   friend int operator>(const myString &a, const myString &b);      //字符串大于比较
   friend myString operator+(const myString &a, const myString &b); //字符串拼接
   friend ostream& operator<<(ostream& out,const myString& right);
   friend istream& operator>>(istream& in,myString& right); 
   //补充赋值重载运算
   myString& operator=(const myString&right);
   myString& operator=(const char * right);
   //补充析构函数
   ~myString();
private:
   char *str;
   int size;
};

//考虑为myString添加输入输出流重载
ostream& operator<<(ostream& out,const myString& right);
istream& operator>>(istream& in, myString& right);  