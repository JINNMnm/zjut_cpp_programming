#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
bool mystrncpy(char *to , char *from,unsigned startpos,unsigned len);
int main(){
    char from[15] = "abcdefghijklmn";
    char * to;
    int n ,startpos = 0,len = 0;
    to = new char [n];
    cout <<  "输入目标数组的长度：";
    cin >> n;
    cout << endl << "输入开始位置和拷贝长度： ";
    cin >> startpos >> len;
    if(mystrncpy(to,from,startpos,len)){
            cout << "成功拷贝，结果为："  << to;
    }else{
        cout << "error" << endl ;
    }
    
    delete [] to;
    return 0;
}
bool mystrncpy(char *to , char *from,unsigned startpos,unsigned len){
    if(startpos + len > strlen(from) or len > strlen(to)){
        return 0;
    }
    int pos = 0;
    for(int i = startpos;i < startpos + len;i++){
        to[pos++] = from [i];
    }
    to[pos] = '\0';
    return 1;
}