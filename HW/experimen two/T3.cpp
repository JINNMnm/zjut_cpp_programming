#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;\
string reverse(string str){
    int n = str.length();
    for(int i=0; i<n/2; i++){
        swap(str[i], str[n-i-1]);
    }
    return str;
}
string myplus(string &a,string &b){
    string res(a.size() > b.size() ? a.size() + 1: b.size() + 1, '0');
    int p1 = a.size() - 1,p2 = b.size() - 1,p3 = -1;
    for(;p1 >= 0 and p2 >= 0;p1--,p2--){
        int sum = 0;
        sum += a[p1] - '0';
        sum += b[p2] - '0';
        sum += res[++p3] - '0';
        if(sum >= 10){
            res[p3] = (char)(sum % 10 + 48);
            res[p3 + 1] = (char)(sum / 10 + 48);
        }else{
            res[p3] = (char)(sum + 48);
        }
    }
    if(p1 >= 0){
        for(int i = p1;i >= 0;i--){
            int sum = 0;
            sum += a[i] - '0';
            sum += res[++p3] - '0';
            if(sum >= 10){
                res[p3] = (char)(sum % 10 + 48);
                res[p3 + 1] = (char)(sum / 10 + 48);
            }else{
                res[p3] = (char)(sum + 48);
            }
        }
    }else if(p2 >= 0){
        for(int i = p2;i >= 0;i--){
            int sum = 0;
            sum += b[i] - '0';
            sum += res[++p3] - '0';
            if(sum >= 10){
                res[p3] = (char)(sum % 10 + 48);
                res[p3 + 1] = (char)(sum / 10 + 48);
            }else{
                res[p3] = (char)(sum + 48);
            }
        }
    }   
    return reverse(res);
}
string remove0(string str) {
    int i = 0;
    while (i < str.size() - 1 && str[i] == '0') {
        i++;
    }
    return str.substr(i);
}

string myminus(string &a,string &b){
    int flag = 1;
    if(a < b){
        flag = -1;
        swap(a,b);
    }
    b = string(a.size() - b.size(), '0') + b;//给b高位补0，使ab等长
    string res(a.size(), '0');
    int borrow = 0;
    for(int i = a.size() - 1;i >= 0;i--){
        int diff = 0;
        diff = a[i] - b[i] - borrow;
        if(diff>= 0){
            borrow = 0;
        }else{
            diff += 10;
            borrow = 1;
        }
        res[i] = char(diff + '0');
    }
    if (flag == -1)
    {
        res = '-' + remove0(res);
    }
    
    return remove0(res) ;
}
string mymultiply(string &a,string &b){
    if(a < b){ //保证a比b长
        swap(a,b);
    }
    string res(a.size() + b.size(), '0');
    for(int i = a.size() - 1;i >=0;i--){
        int carry = 0;
        for(int j = b.size() - 1;j >=0 ;j--){
            int mul = (b[j] -'0') * (a[i] - '0');
            int sum = mul + carry + res[i + j + 1] - '0';
            res[i + j + 1] = (sum % 10) + '0';
            carry = sum / 10;
        }
        res[i] += carry; // 加上进位
    }
    return remove0(res);
}
int main(){
    string a;
    string b;
    char func;
    cin >> a >> b >> func;
    if(func == '+'){
        cout << remove0(myplus(a,b)) << endl;
    }else if(func == '-'){
        cout << myminus(a,b) << endl;
    }else if(func == '*'){
        cout << mymultiply(a,b) << endl;
    }else{
        cout << "error" << endl;
    }
    return 0;
}