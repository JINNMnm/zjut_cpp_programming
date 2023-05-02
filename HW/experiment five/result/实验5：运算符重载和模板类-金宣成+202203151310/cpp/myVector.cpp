#include "../hpp/myVector.hpp"
#include "../hpp/myString.hpp"
#include <iostream>
#include <string.h>
using namespace std;

//构造函数
template <class T>
myVector<T>::myVector(int size){
    this->size = size;
    data = new T[size];
}

//无参构造
template <class T>
myVector<T>::myVector(){
    size = 0;
    data = NULL;
}

//拷贝构造函数
template <class T>
myVector<T>::myVector(const myVector<T> &right){
    size = right.size;
    data = new T[size];
    for(int i = 0;i < size;i++){
        data[i] = right.data[i];
    }
}

//赋值重载
template <class T>
myVector<T>& myVector<T>::operator=(const myVector<T> &right){
    if(this == &right){
        return *this;
    }
    delete[] data;
    size = right.size;
    data = new T[size];
    for(int i = 0;i < size;i++){
        data[i] = right.data[i];
    }
    return *this;
}

//下标运算
template <class T>
T& myVector<T>::operator[](int index){
    return data[index];
}

//减号的赋值重载
template <class T>
myVector<T> myVector<T>::operator-(){
    myVector<T> temp(size);
    for(int i = 0;i < size;i++){
        temp.data[i] = this->data[size - i - 1];
    }
    return temp;
}

template <class T>
void myVector<T>::display() const {
    for(int i = 0;i < size;i++){
        cout << data[i] << " ";
    }
    cout << endl;
}

//调整容量
template <class T>
void myVector<T>::set_size(unsigned newsize){
    //如果新的容量大，那就扩容，如果新的容量小，那就缩容，把最后几个删去，其他保留
    if(newsize > size){
        T* temp = new T[newsize];
        for(int i = 0;i < size;i++){
            temp[i] = data[i];
        }
        delete[] data;
        data = new T[newsize];
        data = temp;
        size = newsize;
    }
    else{
        size = newsize;
        T* temp = new T[newsize];
        for(int i = 0;i < newsize;i++){
            temp[i] = data[i];
        }
        delete[] data;
        data = new T[newsize];
        data = temp;
    }
}

//获取容量
template <class T>
int myVector<T>::get_size() const{
    return size;
}

//输入流重载
template <class T>
istream& operator>>(istream &in, myVector<T> &vec){
    for(int i = 0;i < vec.size;i++){
        in >> vec.data[i];
    }
    return in;
}

//输出流重载
template <class T>
ostream& operator<<(ostream &out, const myVector<T> &vec){
    for(int i = 0;i < vec.size;i++){
        out << vec.data[i] << ",";
    }
    return out;
}

//减法重载，即求两个集合的差集
template <class T>
myVector<T> operator-(const myVector<T> &left, const myVector<T> &right){
    myVector<T> temp(left.size);
    int count = 0;
    for(int i = 0;i < left.size;i++){
        bool flag = true;
        for(int j = 0;j < right.size;j++){
            //cout << left.data[i] << " " << right.data[j] << endl;
            if(left.data[i] == right.data[j]){
                flag = false;
                break;
            }
        }
        if(flag){
            temp.data[count++] = left.data[i];
        }
    }
    temp.set_size(count);
    return temp;
}
template myVector<myString> operator-(const myVector<myString> &left, const myVector<myString> &right);

//后置自增重载
template <class T>
myVector<T>& myVector<T>::operator++(int){
    for(int i = 0;i < size;i++){
        data[i]++;
    }
    return *this;
}
//析构函数
template <class T>
myVector<T>::~myVector(){
    delete[] data;
}
