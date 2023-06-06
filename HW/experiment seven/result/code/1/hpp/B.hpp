#include <iostream>
#include "A.hpp"
using namespace std;

class B : public A
{
public:
    B(int v1 = 0, int v2 = 0, int v3 = 0, int v4 = 0, int v5 = 0, int v6 = 0) : A(v1, v2, v3), Ba(v4), Bb(v5), Bc(v6) {}
    void F4() { cout << "F4 " << Ba << " " << Bb << " " << Bc << endl; }
    int Ba;

protected:
    void F5() { cout << "F5 " << Ba << " " << Bb << " " << Bc << endl; }
    int Bb;

private:
    void F6() { cout << "F6 " << Ba << " " << Bb << " " << Bc << endl; }
    int Bc;
};
