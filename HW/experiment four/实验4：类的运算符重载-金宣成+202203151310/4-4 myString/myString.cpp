#include <iostream>  
#include <string>
#include <string.h>
#include "myString.hpp"
using namespace std;
myString::myString() {  
    str = new char ('\0');
    size = 0;  
}

myString::myString(const myString& right) {  
    str = new char[strlen(right.str) + 1];  
    strcpy(str, right.str);  
    size = right.size;  
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

void myString::display() const {  
    cout << str << endl;  
}

void myString::input() {  
    cout << "ÇëÊäÈë×Ö·û´®£º";  
    getchar();//????????
    gets(str);
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
    if(str != NULL){
        delete [] str;
    }
    this->str = new char [strlen(right) + 1];
    strcpy(str,right);
    size = strlen(str);
    return (*this);
}
myString& myString::operator=(const myString& other) {
    if(str != NULL){
        delete [] str;
    }
    str = new char [other.size + 1];
    strcpy(str,other.str); 
    size = other.size;
    return (*this);  
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
    return res;
}

ostream& operator<<(ostream& out,const myString& right){
    out << right.str ;
    return out;
}

istream& operator>>(istream& in, myString& right){
    in >> right.str;
    return in;
}



