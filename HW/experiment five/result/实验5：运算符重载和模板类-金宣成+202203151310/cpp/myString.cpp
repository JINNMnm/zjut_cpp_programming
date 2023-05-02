#include <iostream>  
#include <string>
#include <string.h>
#include "../hpp/myString.hpp"
using namespace std;

myString::myString() {  
    str = new char ('\0');
    size = 0;  
}

myString::myString(const char* rstr,int s = 0,int len = 0) {  
    if (rstr[0] == '\0') {  
        str[0] = '\0';  
        size = 0;  
        return;  
    }  
    str = new char[len + 1];  
    int i = 0;
    for(i = 0;i < len ;i++){
        str[i] = rstr[s + i];
    }
    str[i] = '\0';
    size = strlen(str);  
}


myString::myString(const char* r){
    str = new char[strlen(r) + 1];
    strcpy(str,r);
    size = strlen(str);
    return;
}

myString::myString(const myString& right){
    str = new char[strlen(right.str) + 1];
    strcpy(str,right.str);
    size = right.size;
    return;
}


myString::myString(int len,const char r = '\0'){
    size = len;
    str = new char[size + 1];
    int i;
    for(i = 0;i < len;i++){
        str[i] = r;
    }
    str[i] = '\0';
}

myString::~myString() {  
    delete[] str;  
}

//获取字符串长度
int myString::get_size() const {  
    return size;  
}

void myString::display() const {  
    cout << str << endl;  
}

void myString::input() {    
    cin >> str;
}

int myString::len() const {  
    return size;  
}

int operator==(const myString &a, const myString &b){
    if(strcmp(a.str,b.str) == 0){
        return 1;
    }
    return 0;
}

char& myString::operator[](int i){
    return this->str[i];
}
int operator>(const myString& a, const myString& b) {  
    return strcmp(a.str, b.str) > 0;  
}

myString& myString::operator=(const char * right){
    if(str == NULL){
        delete [] str;
    }
    size = strlen(right);
    this->str = new char [size + 1];
    strcpy(str,right);
    return (*this);
}
myString& myString::operator=(const myString& other) {
    if(str != NULL){
        delete [] str;
    }
    str = new char [other.size + 1];
    strcpy(str,other.str); 
    size = other.size;  
    // cout << "str:" << str << "        " << "size:" << size << endl;
    return *this;  
}

myString operator+(const myString &a, const myString &b){
    myString res;
    res.size = a.size + b.size;
    int i;
    for( i = 0;i < res.size;i++){
        if(i < a.size){
            res.str[i] = a.str[i];
        }else{
            res.str[i] = b.str[i-a.size];
        }
    }
    res.str[i] ='\0';
    res.size = strlen(res.str);
    return res;
}

ostream& operator<<(ostream& out,const myString& right){
    out << right.str ;
    return out;
}

//后置自增重载运算
myString myString::operator++(int){
    myString temp = *this;
    int i;
    for(i = 0;i < size;i++){
        if(str[i] >= 'a' and str[i] <= 'z' or str[i] <= 'Z' and str[i] >= 'A')str[i] = str[i] + 1;
    }
    return temp;
}

//类型转换运算符重载
myString::operator const char*(){
    return str;
}
istream& operator>>(istream& in, myString& right){
    in >> right.str;
    return in;
}



