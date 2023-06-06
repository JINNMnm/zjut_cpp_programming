#include <iostream>
#include "student.h"
using namespace std;
int student::count = 0;
int student::sum = 0;
int main(){
    student stu[3] = {student(1001,18,70),student(1002,19,78),student(1005,20,98)};
    int n;
    cout << "please enter the number of students: " ;
    cin >> n;
    for(int i = 0;i < n;i++){
        stu[i].total();
    } 
    cout << "average is:" << stu[n-1].average() << endl;
    return 0;
}