#include <iostream>
#include "../hpp/C.hpp"
using namespace std;

int main()
{
    A Aobj1, Aobj2(1, 2, 3);
    B Bobj1, Bobj2(1, 2, 3, 4, 5);
    C Cobj1, Cobj2(1, 2, 3, 4, 5, 6);
    //��������ABC���еĳ�Ա�����Ƿ�����ã������õ�ʹ��ע�ͱ��
    Aobj1.F1();
    Aobj2.F1();
    //A.F2();
    //A.F3();
    Bobj1.F1();
    Bobj2.F1();
    //B.F2();
    //B.F3();
    Bobj1.F4();
    //B.F5();
    //B.F6();
    //C.F1();
    //C.F2();
    //C.F3();
    //C.F4();
    //C.F5();
    //C.F6();
    Cobj1.F7();
    Cobj2.F7();
    //C.F8();
    return 0;
}
