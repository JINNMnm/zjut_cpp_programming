#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    string a,b;
    int sum = 0;
    while(cin.peek() != '#' and cin >> a >> b){
        for(int i = 0;i <= a.size() - b.size() ;i++){
            int j ;
            for(j = 0;j < b.size();j++){
                if(a[i + j] != b[j]){   
                    break;
                }
            }
            if(j == b.size()){
                sum++;
                i = i + b.size() - 1;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}