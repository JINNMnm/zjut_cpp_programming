#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
bool tell(char a,char b){
    if(a >= '2' and a <= '8'){
        if(a - '0' + 1 == b - '0'){
            return 1;
        }else{
            return 0;
        }
    }else if(a == '9' and b == '1'){
        return 1;
    }else if(a == 'A' and b == '2'){
        return 1;
    }else if(a == '0' and b == 'J'){
        return 1;
    }else if((a == 'J' and b == 'Q') or (a == 'Q' and b == 'K')){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    string zhuo,shou;
    cin >> zhuo >> shou ;
    if(tell(zhuo[zhuo.length() - 1] , shou[0])){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        return 0;
    // while(cin >> zhuo >> shou){
    //     if(tell(zhuo[zhuo.length() - 1] , shou[0])){
    //         cout << "Yes" << endl;
    //     }else{
    //         cout << "No" << endl;
    //     }
    // }
}