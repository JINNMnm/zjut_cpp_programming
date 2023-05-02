#include<iostream>
using namespace std;

const int MAX = 100;

void InitMatrix(int arr[][MAX], int n, int m);  // 初始化函数
int* Multiply(int a[][MAX], int b[][MAX], int n, int k, int m);  // 计算矩阵乘法并返回结果
void Display(int* c, int n, int m);  // 输出函数

int main()
{
    const int n = 2, k = 3, m = 4;
    int a[n][k], b[k][m];
    int* c = nullptr;

    InitMatrix(a, n, k);  // 初始化矩阵a
    InitMatrix(b, k, m);  // 初始化矩阵b
    c = Multiply(a, b, n, k, m);  // 计算aXb 
    Display(c, n, m);  // 输出计算结果

    if (c){
        delete[] c;  // 释放申请的内存
        c = nullptr;
    }

    return 0;
}

void InitMatrix(int arr[][MAX], int n, int m)  
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << "请输入a[" << i << "][" << j << "]: " << endl;
            cin >> arr[i][j];
        }
    }
}

int* Multiply(int a[][MAX], int b[][MAX], int n, int k, int m)
{
    int* c = new int[n * m];  // 为结果矩阵申请内存

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            c[i * m + j] = 0;
            for (int s = 0; s < k; s++){
                c[i * m + j] += a[i][s] * b[s][j];
            }
        }
    }
    return c;
}

void Display(int* c, int n, int m)
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << c[i * m + j] << " ";
        }
        cout << endl;
    }
}
