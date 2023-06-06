#include <iostream>
using namespace std;
class student
{
    public:
        student(int n ,int a ,int s):num(n),age(a),score(s){}
        void total();
        float average();
    private:
        int num;
        int age;
        int score;
        static int sum;
        static int count;
};
void student::total(){
    sum += score;
    count++;
}
float student::average(){
    if(count == 0)return 0;
    else return (sum*1.0/count);
}