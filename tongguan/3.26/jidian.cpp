#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
struct student
{
    string name;
    int score[11];
    double jd[11];
    double zjd = 0;
};
bool cmp(student a,student b){
    if(a.zjd != b.zjd){
        return a.zjd  > b.zjd;
    }
    if(a.name != b.name){
        return a.name < b.name;
    }
    return 0;
}
int main(){
    int banji;
    cin >> banji;
    int n,js = 0;
    int xuefen[11],m;
    while(banji--){
        cin >> n;
        for(int i = 1;i <= n ;i++){
            cin >> xuefen[i];
        }
        cin >> m;
        student stu[51];
        for(int i = 1;i <= m;i++){
            cin >> stu[i].name ;
            for(int j =1;j <= n;j++){
                cin >> stu[i].score[j];
            }
        }
        cout << "class " << ++js << ':' << endl;
        for(int i = 1;i <= m;i++){
            for(int j = 1;j <= n;j++){
                if(stu[i].score[j] < 60){
                    stu[i].jd[j] = 0;
                }else{
                    stu[i].jd[j] = ((stu[i].score[j] - 50)/10.0) * xuefen[j];
                }
                stu[i].zjd += stu[i].jd[j];
            }
            stu[i].zjd /= 10;
        }   
        sort(stu + 1,stu + m + 1,cmp);
        for(int i = 1;i <= m;i++){
            cout << std::left << setw(10) << stu[i].name;
            cout << setprecision(2) << fixed << stu[i].zjd << endl;            
        }
        cout << endl;
    }
    return 0;
}