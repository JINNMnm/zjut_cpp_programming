#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n = 0;
    int a[10000],b,t[10000] = {0};
    while(cin >> b and b != 0){
        a[++n] = b; 
    }
    cout << n << endl;
    for(int i = 1;i <= n;i++){
        t[i] = !(a[i]%2) + !(a[i]%3) + !(a[i]%5) + !(a[i]%7)
        + !(a[i]%11) + !(a[i]%13) + !(a[i]%17) + !(a[i]%19);
    }
    for(int i = 8;i >= 0;i--){
        int sum = 0;
        for(int j = 1;j <= n;j++){
            if(t[j] == i){
                sum++;
            }
        }
        cout << i << ':' << sum << endl;
    }
    return 0;
}