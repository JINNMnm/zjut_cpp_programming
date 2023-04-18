#include <iostream>
#include <algorithm>
#include "myVector.hpp"
using namespace std;
myVector::myVector(unsigned n,int value){
    size = n;
    for(int i = 0;i < n;i++){
        data[i] = value;
    }
}

myVector::myVector(const myVector& right){
    size = right.size;
    for(int i = 0;i < size;i++){
        data[i] = right.data[i];
    }
}

myVector& myVector::operator=(const myVector& right){
    size = right.size;
    for(int i = 0;i < size;i++){
        data[i] = right.data[i];
    }
    return (*this);
}

int & myVector::operator[](unsigned index){
    return this->data[index];
}
int myVector::get_size()const{
    return size;
}

void myVector::set_size(unsigned newsize){
    size = newsize;
}

void myVector::display()const{
    for(int i =0;i < size;i++){
        cout << this->data[i] << ',';
    }
    cout << endl;
}

myVector myVector::operator-(){
    myVector a;
    for(int i = 0;i < size;i++){
        a.data[i] = this->data[size - 1 - i];
    }
    return a;
}

void myVector::sort() {  
    for (int i = 0; i < size - 1; i++) {    
        for (int j = 0; j < size - i - 1; j++) {    
            if (data[j] > data[j + 1]) {    
                // ½»»» data[j] ºÍ data[j+1]    
                int temp = data[j];    
                data[j] = data[j + 1];    
                data[j + 1] = temp;    
            }    
        }    
    }    
}

myVector myVector::operator++(){
    for(int i = 0;i < size;i++){
        data[i]++;
    }
    return (*this);
}

myVector myVector::operator++(int){
    myVector res = (*this);
    for(int i = 0;i < size;i++){
        data[i]++;
    }
    return res;
}
ostream& operator<<(ostream& out,const myVector& vec){
    for(int i = 0 ;i < vec.size;i++){
        out << vec.data[i] << ',';
    }
    out << endl;
    return out;
}

istream& operator>>(istream& in,myVector& vec){
    for(int i = 0;i < vec.size;i++){
        in >> vec.data[i];
    }
    return in;
}

myVector  operator+(const myVector& left,const  myVector& right){
    myVector res;
    res.size = left.get_size() + right.get_size();
    for(int i = 0;i < res.size;i++){
        if(i < left.get_size()){
            res[i] = left.data[i];
        }else{
            res[i] = right.data[i - left.get_size()];
        }
    }
    return res;
}

myVector  operator-(const myVector& left, const myVector& right){
    myVector res;
    res.size = left.get_size();
    int flag = 1,index = -1;
    for(int i = 0;i < left.get_size();i++){
        flag = 1;
        for(int j = 0;j < right.get_size();j++){
            if(right.data[j] == left.data[i]){
                flag = 0;
                res.size--;
            }
        }
        if(flag){
            res[++index] = left.data[i];
        }
    }
    return res;
}