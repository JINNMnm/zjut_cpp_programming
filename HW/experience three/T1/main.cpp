#include "position.hpp"
#include <iostream>
using namespace std;
// double Distance(const position& a,const position& b){
//     return sqrt((a.x-b.x) * (a.x-b.x) + (a.y-b.y)*(a.y-b.y));
// }
// double Distance(const position& a){
//     return sqrt(a.x*a.x + a.y * a.y);
// }
int main() {
    position a; //Ĭ������λ��Ϊԭ��
    position b(4.0,5.0),c(b),d(0,0),e(1); //b��λ��Ϊx��ֵ4��y��ֵ5
    cout<<"a(0,0):";
    a.show();
    a.set(5,15);
    cout<<"a(5,15):"; a.show();
    cout<<"b(4,5):"; b.show();
    b.set(-4.5,6.7);
    cout<<"b(-4.5,6.7):"; b.show();
    cout<<"c(4,5):"; c.show();
    c.set(-10, -100);
    cout<<"c(-10,-100):"; c.show();
    cout<<"d(0,0):"; d.show();
    d.set(20.5,5.5);
    cout<<"d(20.5,5.5):"; d.show();
    cout<<"e(1,0):"; e.show();
    e.set();//Ĭ��Ϊԭ��
    cout<<"e(0,0):"; e.show();
    cout<<a.Distance(b)<<endl;
    cout<<c.Distance()<<endl;//Ĭ������ԭ��ľ���
    cout<<a.slope()<<endl; //��ԭ�㹹��ֱ�ߵ�б��
    cout<<a.slope(d)<<endl;  //��d����ֱ�ߵ�б��
    a.move(3);//��x��ƽ��
    cout<<"a(8,15):"; a.show();
    b.move(-4,5);
    cout<<"b(-8.5,11.7):"; b.show();
    c.move(0,6);//��y��ƽ��
    cout<<"c(-10,-94):"; c.show();
    return 0;
}
