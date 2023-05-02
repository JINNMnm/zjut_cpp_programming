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
        cin >> aStrSet[i]; //输入若干个字符串到a     Today-   is-  a-  rainy-  day.

    for (i = 0; i < bStrSet.get_size(); i++)
        cin >> bStrSet[i]; //输入若干字符串到b        Today- is-  my-  birthday.

    cout << "字符串集a的构成为：" << endl;
    for (i = 0; i < aStrSet.get_size(); i++)
    {
        cout << aStrSet[i]; //增加myString的输出流运算支持，将字符串集合a 输出到屏幕上
    }                       // Today-is-a-rainy-day.
    cout << endl;

    sort(aStrSet); //增加myString的比较运算支持，将字符串集合a 按照字典序排序
    cout << "字符串集a排序后的构成为：" << endl;
    for (i = 0; i < aStrSet.get_size(); i++)
    {
        cout << aStrSet[i]; //增加myString的输出流运算支持，将字符串集合a 输出到屏幕上
    }                       // Today-is-a-rainy-day.
    cout << endl;

    cout << "字符串集b的构成为：" << endl;
    for (i = 0; i < bStrSet.get_size(); i++)
    {
        cout << bStrSet[i]; //将字符串集合b输出到屏幕上
    }                       // Today- is- my- birthday.
    cout << endl;

    cStrSet = aStrSet - bStrSet;
    for (i = 0; i < cStrSet.get_size(); i++)
    { //将字符串集合a和b的差的结果输出到屏幕上
        cout << cStrSet[i] << ' ';
    } // a-rainy-day.
    cout << endl;

    cStrSet.set_size(5);
    for (i = 0; i < 5; i++)
        cStrSet[i] = str[i];

    for (i = 0; i < cStrSet.get_size(); i++)
    { //将字符串集合c的结果输出到屏幕上
        cout << cStrSet[i];
    } // Today-is-a-sunny-day.
    cout << endl;

    for (i = 0; i < cStrSet.get_size(); i++) //将集合内的字符串拼接起来
    astr = astr + cStrSet[i];

    cout << astr; //显示拼接后的字符串 Today-is-a-sunny-day.
    cout << endl;

    astr++;       //定义myString的增量操作，将串内的每个字母循环调整为其后面的字母，如abc 调整为bcd；其他符号保持不变。
    cout << astr; // Upebz-jt-b-tvmmz-ebz.
    cout << endl;

    cout << strlen(astr); //定义myString的类型转换操作，使其可以使用strlen, 输出 21

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