#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n,m,k;
    while(cin >> n >> m >> k){
        int left = 0,p = 1,t = 1;
        bool * state = new bool [n+1];
        for(int i = 0 ;i <= n;i++) state[i] = true;
        while ( n - left > k ){
            if(t % m == 0){
                left ++;
                state[(p-1)%n+1] = false;
                p++;
                t++;
            }
            if(state[(p-1)%n + 1]){
                while(state[(p)%n + 1] == false){
                    p++;
                }
                t++;
            }
            p++;
        }
        for(int i = 1;i <= n;i++){
            if(state[i] ){
                cout << i << ' ';
            }
        }
        delete [] state;
        cout << endl;
    }
    
    return 0;
}
