//���Գ���
#include <iostream>
#include "linkedList.hpp"
using namespace std;
int main()
{
    linked_list<int>  a1,a2,b,c; //����Ƶ���Ϊģ�壬�����linked_list<int>  a1,a2,b,c;
    int data;           //�����Ϊģ���࣬��˴�ֱ��ʹ��int data;

    //���������������
    //����2 ,6, 7, 3, 5, 9,12, 4 ,0
    while (cin >> data)
    {
        if (data == 0)
            break; //����0����
        a1.add_front(data);
        a2.add_tail(data);
    }
    a1.display(); //������ 4��12��9��5��3��7��6��2
    a2.display(); //������2��6��7��3��5��9��12��4

    //����ת�ò���
    //����2 ,16, 3, 8, 15, 4, 9, 7 ,0
    while (cin >> data)
    {
        if (data == 0)
            break; //����0����
        b.add_tail(data);
    }
    b.display(); //ԭʼ����2,16,3,8,15,4,9,7
    b.reverse();
    b.display();               //ת�ý��7,9,4,15,8,3,16,2

    c = a1 + b;                //���Լ��ϲ�
    c.display();               // 4,12,9,5,3,7,6,2,15,8,16

    c = a1 - b;                //���Լ��ϲ����a1�Ҳ�����b�����ݣ�X
    c.display();               // 12��5��6

    c = a1.intersectionSet(b); //���Լ��Ͻ�
    c.display();               // 4,9,3,7,2

    a1.sort();                 //������������
    a1.display();              // 2,3,4,5,6,7,9,12

    //˼����Ҫ���������������
    b.add_tail(8);
    b.add_tail(16);
    b.add_tail(3);
    b.add_front(3);
    b.add_front(16);
    b.display(); // 16,3,7,9,4,15,8,3,16,2,8,16,3

    b.delete_all(16);  //ɾ�����е�16
    b.display();       // 3,7,9,4,15,8,3,2,8,3
    b.delete_repeat(); //��b����Ϊ���ظ�����
    b.display();       // 3,7,9,4,15,8,2

    node<int> *pos = b.find(15);
    b.add_pos_after(18, pos);
    b.display(); // 3,7,9,4,15,18,8,2

    b.add_pos_before(23, pos);
    b.display(); // 3,7,9,4,23,15,18,8,2
    b.delete_pos_after(pos);
    b.display(); // 3,7,9,4,23,15,8,2

    b.delete_pos_before(pos);
    b.display(); // 3,7,9,4,15,8,2

    b.Delete(7);
    b.display(); // 3,9,4,15,8,2
    b.Delete(8);
    b.display(); // 3,9,4,15,2

    b.sort();
    b.display(); // 2,3,4,9,15

    a2 = mergeSortedList(a1, b);
    a2.display(); // 2,3,4,5,6,7,9,12,15

    return 0;
}