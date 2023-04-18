#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        for(int i = 1;i <= n;i++){
            cout << 'a';
            for(int j = 1;j <= n - i;j++){
                cout << ' ';
            }
            for(int k = 1;k <= i;k++){
                cout << char('a' + k - 1);
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}