#ifndef MYSTRING_HPP
#define MYSTRING_HPP
#include <iostream>
using namespace std;
class myString
{
public:
   //���ݲ��Գ���д���캯��ԭ��
   //�޲ι��캯��
   myString() ;

   //�������캯��
   myString(const char* str,int s,int end);

   //�вι��캯��
   myString(int len,const char r);

   //�вι��캯��
   myString(const char* r);

   //�������캯��
   myString(const myString& right);
   
   //��ʾ�ַ���
   void display() const; 

   //�����ַ���
   void input();      

   //���ַ�������
   int len() const;  

   //�����±���������
   char& operator[](int i);

   //�ַ������ڱȽ�
   friend int operator==(const myString &a, const myString &b);     

   //�ַ������ڱȽ�
   friend int operator>(const myString &a, const myString &b);      

   //�ַ���ƴ��
   friend myString operator+(const myString &a, const myString &b); 

   //�������������
   friend ostream& operator<<(ostream& out,const myString& right);

   //��������������
   friend istream& operator>>(istream& in,myString& right);

   //���丳ֵ��������
   myString& operator=(const myString&right);
   myString& operator=(const char * right);

   //����������������
   myString operator++(int);

   //����ת��
   operator const char*();

   //��ȡ�ַ�������
   int get_size() const;

   //������������
   ~myString();
private:
   char *str;
   int size;
};

//����ΪmyString����������������
ostream& operator<<(ostream& out,const myString& right);
istream& operator>>(istream& in, myString& right);  
#endif