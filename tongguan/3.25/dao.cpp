#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n ;
    cin >> n;
    string a,zheng;
    getline(cin,a);
    while(n --){
        getline(cin,a);
        if(a[0] == '-'){
            zheng = a.substr(1,a.size() - 1);
            cout << '-';
        }else{
            zheng = a;
        }
        for(int i = zheng.size() - 1;i >= 0;i -- ){
            cout << zheng[i];
        }
        cout << endl;
    }
    return 0;
}