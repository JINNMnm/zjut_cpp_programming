#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int xs(double a){
    int sum = 0;
    while(a - int(a) != 0){
        a *= 10;
        sum ++;
    }
    return sum;
}
int main(){
    long long  n,fz = 0,fm = 0;
    cin >> n;
    while(n--){
        double a;
        cin >> a;
        fm = pow(10,xs(a));
        fz = a * fm;
        int zdgy = gcd(fz,fm);
        fz = fz / zdgy;
        fm = fm / zdgy;
        cout << fz << '/' << fm << endl;
    }
    return 0;
}
