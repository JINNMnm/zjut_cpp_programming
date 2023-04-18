#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int T;
    cin >> T;
    int a,b;
    long sum;
    while(T--){
        cin >> a >> b;
        string m,n;
        if(a >= 100){
            m = to_string(a);
            n = m.substr(m.size() - 2,2);
            a = stoi(n);
        }
        if(b >= 100){
            m = to_string(b);
            n = m.substr(m.size() - 2,2);
            b = stoi(n);
        }
        sum = a + b;
        string h = to_string(sum);
        if(h.size() == 1){
            if(!T)
            cout << h;
            else
            cout << h << endl;
        }else{
            string i = h.substr(h.size() - 2,2);
            int j = stoi(i);
            if(!T)
            cout << j;
            else
            cout << j << endl;
        }
    }
    return 0;
}