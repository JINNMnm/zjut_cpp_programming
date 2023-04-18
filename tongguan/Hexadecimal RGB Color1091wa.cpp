#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
bool tell(string a,string b){
    if((a[1] < b[1] or (a[1] == b[1] and a[2] <= b[2])) and 
       (a[3] < b[3] or (a[3] == b[3] and a[4] <= b[4])) and
       (a[5] < b[5] or (a[5] == b[5] and a[6] <= b[6])) )
    return 1;
    return 0;
}
int main(){
    int n;
    cin >> n;
    string * a = new string [n];
    for(int i = 0;i < n;i++) cin >> a[i];
    sort(a,a+n);
    // cout << endl;
    // for(int i = 0;i < n ;i++) cout << a[i] << ' ' ;
    // cout << endl;
    int * b = new int [n];
    for(int i = 0;i < n;i++) b[i] = 1;
    for(int i = 1;i < n;i ++){
        for(int j = 0;j < i;j++){
            if(tell(a[j],a[i]) and b[j] + 1 > b[i]){
                b[i] = b[j] + 1;
            }
        }
    }
    int max = -1;
    for(int i = 0;i < n;i++){
        if(b[i] > max) max = b[i];
    }
    cout << max ;
    delete [ ] b;
    delete [ ] a;
    return 0;
}