#include <iostream>
#include "myString.hpp"
using namespace std;
int main()
{
   char str[30] = "Sue likes hot weather.";
   myString a,           //�մ�
   b("I love ZJUT"), // I love ZJUT
   c(str, 10, 11),   // hot weather
   d(3, 'a'),        // aaa
   e(b);             // I love ZJUT
   cout << "a:";
   a.display();
   cout << "b:";
   b.display();
   cout << "c:";
   c.display();
   cout << "d:";
   d.display();
   cout << "e:";
   e.display();

   if (b == str)
      cout << "equal";
   else
      cout << "not equal";
   cout << endl;

   if (b == e)
      cout << "equal";
   else
      cout << "not equal";
   cout << endl;

   a = c;
   cout << "a:";
   a.display();
   a[2] = 'x';
   cout << "a:";
   a.display();

   if (d > e)
      d.display();
   else
      e.display();

   //����ַ���b������
   for (int i = 0; i < b.len(); i++)
      cout << b[i];
   cout << endl;
   cout << "tesy >> and <<" << "input to m:";
   myString m;
   cin >> m;
   cout << "m is:" << m << endl;
   b = "Steve is happy today.";
   cout << "b:";
   b.display();
   c.display();
   a.input();   //���룺Kate wasn't hungry.
   a.display(); //�����Kate wasn't hungry.
   a = e + " and " + c;
   a.display(); //����� I love ZJUT and hot weather
   return 0;
}