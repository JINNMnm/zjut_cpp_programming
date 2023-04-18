#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n , m;
    int ma[101][101];
    cin >> n;
    while(n--){
        cin >> m;
        int flag = 1;
        for(int i = 1;i <= m;i++){
            for(int j = 1;j <= m;j++){
                cin >> ma[i][j];
            }
        }
        for(int i = 1;i <= m / 2;i++){
            for(int j = 1;j <= m;j++){
                if(ma[i][j] != ma[m-i+1][j]){
                    flag = 0;
                    goto out;
                }
            }
        }
        out:
        if(flag){
            cout <<"yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}