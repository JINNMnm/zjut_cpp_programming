#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    string essay;
    long long upnum = 0,downnum = 0,nnum = 0,blanum = 0,onum = 0,row = 0;
    while (getline(cin,essay))
    {
        row ++;
        for(int i = 0;i < essay.size();i++){
            if(essay[i] >= 'A' and essay[i] <= 'Z'){
                upnum++;
            }else if(essay[i] >= 'a' and essay[i] <= 'z'){
                downnum++;
            }else if(essay[i] >= '0' and essay[i] <= '9'){
                nnum++;
            }else if(essay[i] == ' '){
                blanum++;
            }else{
                onum++;
            }
        }
    }
    cout << "uppercase:" << upnum << endl;
    cout << "lowercase:" << downnum << endl;
    cout << "number:" << nnum << endl;
    cout << "space:" << blanum << endl;
    cout << "others:" << onum << endl;
    cout << "total number of words:" << blanum + row<< endl;
    return 0;
}