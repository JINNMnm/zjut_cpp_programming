#include "../hpp/myVector.hpp"
#include "../hpp/myString.hpp"
#include <iostream>
#include <string.h>
using namespace std;
// test the hpp
void sort(myVector<myString> & a);
int main()
{
    char str[5][20] = {"Today-", "is-", "a-", "sunny-", "day."};
    myString astr;
    int num, i;
    cin >> num;
    myVector<myString> aStrSet(num), bStrSet(num - 1), cStrSet;

    for (i = 0; i < aStrSet.get_size(); i++)
        cin >> aStrSet[i]; //�������ɸ��ַ�����a     Today-   is-  a-  rainy-  day.

    for (i = 0; i < bStrSet.get_size(); i++)
        cin >> bStrSet[i]; //���������ַ�����b        Today- is-  my-  birthday.

    cout << "�ַ�����a�Ĺ���Ϊ��" << endl;
    for (i = 0; i < aStrSet.get_size(); i++)
    {
        cout << aStrSet[i]; //����myString�����������֧�֣����ַ�������a �������Ļ��
    }                       // Today-is-a-rainy-day.
    cout << endl;

    sort(aStrSet); //����myString�ıȽ�����֧�֣����ַ�������a �����ֵ�������
    cout << "�ַ�����a�����Ĺ���Ϊ��" << endl;
    for (i = 0; i < aStrSet.get_size(); i++)
    {
        cout << aStrSet[i]; //����myString�����������֧�֣����ַ�������a �������Ļ��
    }                       // Today-is-a-rainy-day.
    cout << endl;

    cout << "�ַ�����b�Ĺ���Ϊ��" << endl;
    for (i = 0; i < bStrSet.get_size(); i++)
    {
        cout << bStrSet[i]; //���ַ�������b�������Ļ��
    }                       // Today- is- my- birthday.
    cout << endl;

    cStrSet = aStrSet - bStrSet;
    for (i = 0; i < cStrSet.get_size(); i++)
    { //���ַ�������a��b�Ĳ�Ľ���������Ļ��
        cout << cStrSet[i] << ' ';
    } // a-rainy-day.
    cout << endl;

    cStrSet.set_size(5);
    for (i = 0; i < 5; i++)
        cStrSet[i] = str[i];

    for (i = 0; i < cStrSet.get_size(); i++)
    { //���ַ�������c�Ľ���������Ļ��
        cout << cStrSet[i];
    } // Today-is-a-sunny-day.
    cout << endl;

    for (i = 0; i < cStrSet.get_size(); i++) //�������ڵ��ַ���ƴ������
    astr = astr + cStrSet[i];

    cout << astr; //��ʾƴ�Ӻ���ַ��� Today-is-a-sunny-day.
    cout << endl;

    astr++;       //����myString�����������������ڵ�ÿ����ĸѭ������Ϊ��������ĸ����abc ����Ϊbcd���������ű��ֲ��䡣
    cout << astr; // Upebz-jt-b-tvmmz-ebz.
    cout << endl;

    cout << strlen(astr); //����myString������ת��������ʹ�����ʹ��strlen, ��� 21

    return 0;
}

myString substr(myString& b){
    char * a;
    a = new char[6];
    for(int i = 1;i < 6;i++){
        a[i - 1] = b[i];
    }
    a[5] = '\0';
    myString temp(a);
    return temp;
}

void sort(myVector<myString> & a){
    int i = 0 , j = 0, max = 0;
    myString temp;
    for(int i = 0; i < a.get_size() - 1;i++){
        max = i;
        for(int j = i + 1;j < a.get_size();j++){
            if(substr(a[j]) > substr(a[max])){
                max = j;
            }
        }
        if(max != i){
            temp = a[i];
            a[i] = a[max];
            a[max] = temp;
        }
    }
}