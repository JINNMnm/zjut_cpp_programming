#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int gwsh(long a){
    int sum = 0;
    while(a){
        sum += a % 10;
        a /= 10;
    }
    return sum;
}
int main(){
    long a;
    while(cin >> a){
        cout << gwsh(a) << endl;
    }
    return 0;
}