#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int count[101] = {0};
    while(cin >> n){
        count[n%100]++;
    }
    int max = -1;
    int  t;
    for(int i = 0;i <= 99;i++){
        if(count[i] > max){
            max = count[i];
            t = i;
        }
    }
    cout << t;
    return 0;
}