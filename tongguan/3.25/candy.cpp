#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int a1,b1,a2,b2,n;
    while(cin >> a1 >> b1 >> a2 >> b2){
        for(int i = 1;;i++){
            int mul = 1;
            while(mul * a2 + b2 < i * a1 + b1){
                mul ++;
            }
            if(mul * a2 + b2 == i * a1 + b1){
                cout << i * a1 + b1 << endl;
                break;
            }
        }
    }
    return 0;
}