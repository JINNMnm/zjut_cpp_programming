#include <iostream>
#include "myString.hpp"
using namespace std;
template <class T>
class myVector {
private:
    T* data;
    int size;
public:
    //���캯��
    myVector(int size);

    //�޲ι���
    myVector();

    //�������캯��
    myVector(const myVector<T> &right);

    //��ֵ����
    myVector<T> & operator=(const myVector<T> &right);

    //�±�����
    T& operator[](int index);

    //���ŵĸ�ֵ����
    myVector<T> operator-();
    
    //display
    void display() const ;

    //��������
    void set_size(unsigned newsize);

    //��ȡ����
    int get_size() const;

    //������������
    myVector<T>& operator++(int);
    
    //������Ԫ������������
    template <class T1>
    friend istream & operator>>(istream &in, myVector<T1> &vec);

    //������Ԫ�����������
    template <class T2>
    friend ostream & operator<<(ostream &out, const myVector<T2> &vec);

    //������Ԫ�ļ�������
    template <class T3>
    friend myVector<T3> operator-(const myVector<T3> &left, const myVector<T3> &right);

    //��������
    ~myVector();
}; 

template class myVector<myString>;