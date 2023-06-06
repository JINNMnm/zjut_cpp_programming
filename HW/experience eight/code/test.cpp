// #include <iostream>
// using namespace std;


// void fun(const int&a, const int & b)
// {
//     cout << "fun1:" << a- b << endl;
// }

// void fun(char a, char b)
// {
//     cout << "fun2:" << a + b << endl;
// }

// template<typename T>
// void fun(T a, T b)
// {
//     cout << "fun3:" << a + b << endl;
// }

// int main()
// {
//     fun(1, 2);
//     fun(1.1, 2.2);
//     return 0;
// }

#include <iostream>
using namespace std;

class apple{
    public:
        apple(){
            int score = 1;
            count += score;
            score ++;
            cout << "apple" << count << "," << score << endl;
        }
        void eat(){
            static int score = count ;
            count--;
            score--;
            cout << "eat" << count << "," << score << endl;
        }
        ~apple(){
            count++;
            cout << "~apple" << count << endl;
        }
    private:
        static int count;
};

int apple::count;

int main(){
    apple *a,b;
    a = new apple;
    b.eat();
    b.eat();
    delete a;
    b.eat();
    return 0;
}