#include <iostream>
using namespace std;
class myString
{
public:
   //���ݲ��Գ���д���캯��ԭ��
   myString() ;
   myString(const char* str,int s,int end);
   myString(int len,const char r);
   myString(const char* r);
   void display() const; //��ʾ�ַ���
   void input();                              //�����ַ���
   int len() const;                           //���ַ�����
   //�����±���������
   char& operator[](int i);
   friend int operator==(const myString &a, const myString &b);     //�ַ������ڱȽ�
   friend int operator>(const myString &a, const myString &b);      //�ַ������ڱȽ�
   friend myString operator+(const myString &a, const myString &b); //�ַ���ƴ��
   friend ostream& operator<<(ostream& out,const myString& right);
   friend istream& operator>>(istream& in,myString& right); 
   //���丳ֵ��������
   myString& operator=(const myString&right);
   myString& operator=(const char * right);
   //������������
   ~myString();
private:
   char *str;
   int size;
};

//����ΪmyString����������������
ostream& operator<<(ostream& out,const myString& right);
istream& operator>>(istream& in, myString& right);  