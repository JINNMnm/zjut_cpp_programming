#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ifstream infile1("../TXT/data1.txt");
    ifstream infile2("../TXT/data2.txt");
    ofstream outfile("../TXT/data3.txt");
    int a[20];
    int b[10], c[10];
    for (int i = 0; i < 10; i++)
    {
        infile1 >> b[i];
        infile2 >> c[i];
    }
    sort(b, b + 10);
    sort(c, c + 10);
    int p = 0, q = 0;
    for (int i = 0; i < 20; i++)
    {
        if (b[p] < c[q] or q == 10)
        {
            a[i] = b[p];
            p++;
        }
        else
        {
            a[i] = c[q];
            q++;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        outfile << a[i] << " ";
    }
}