#include <iostream>
#include "myString.hpp"
using namespace std;
template <class T>
class myVector {
private:
    T* data;
    int size;
public:
    //构造函数
    myVector(int size);

    //无参构造
    myVector();

    //拷贝构造函数
    myVector(const myVector<T> &right);

    //赋值重载
    myVector<T> & operator=(const myVector<T> &right);

    //下标运算
    T& operator[](int index);

    //减号的赋值重载
    myVector<T> operator-();
    
    //display
    void display() const ;

    //调整容量
    void set_size(unsigned newsize);

    //获取容量
    int get_size() const;

    //后置自增重载
    myVector<T>& operator++(int);
    
    //申明友元的输入流重载
    template <class T1>
    friend istream & operator>>(istream &in, myVector<T1> &vec);

    //申明友元的输出流重载
    template <class T2>
    friend ostream & operator<<(ostream &out, const myVector<T2> &vec);

    //申明友元的减法重载
    template <class T3>
    friend myVector<T3> operator-(const myVector<T3> &left, const myVector<T3> &right);

    //析构函数
    ~myVector();
}; 

template class myVector<myString>;