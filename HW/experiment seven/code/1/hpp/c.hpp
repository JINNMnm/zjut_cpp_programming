#include <iostream>
#include "b.hpp"
using namespace std;

class C : protected B
{
public:
    C(int v1 = 0, int v2 = 0, int v3 = 0, int v4 = 0, int v5 = 0, int v6 = 0,int v7 = 0,int v8 = 0) : B(v1, v2, v3, v4, v5, v6), Ca(v7), Cb(v8){}
    void F7() { cout << "F7 " << Ba << " " << Bb << endl; }
    void F8() { cout << "F8 " << Ca << " " << Cb << endl; }
    int Ca;

private:
    int Cb;
};
