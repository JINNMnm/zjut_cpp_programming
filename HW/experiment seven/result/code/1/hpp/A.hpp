#include <iostream>
using namespace std;

class A
{ //»ùÀà
public:
    A(int v1 = 0, int v2 = 0, int v3 = 0) : a(v1), b(v2), c(v3) {}
    void F1() { cout << "F1 " << a << " " << b << " " << c << endl; }
    int a;

protected:
    void F2() { cout << "F2 " << a << " " << b << " " << c << endl; }
    int b;

private:
    void F3() { cout << "F3 " << a << " " << b << " " << c << endl; }
    int c;
};
