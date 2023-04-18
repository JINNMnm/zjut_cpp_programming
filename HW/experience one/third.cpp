#include<iostream>
using namespace std;

const int MAX = 100;

void InitMatrix(int arr[][MAX], int n, int m);  // ��ʼ������
int* Multiply(int a[][MAX], int b[][MAX], int n, int k, int m);  // �������˷������ؽ��
void Display(int* c, int n, int m);  // �������

int main()
{
    const int n = 2, k = 3, m = 4;
    int a[n][k], b[k][m];
    int* c = nullptr;

    InitMatrix(a, n, k);  // ��ʼ������a
    InitMatrix(b, k, m);  // ��ʼ������b
    c = Multiply(a, b, n, k, m);  // ����aXb 
    Display(c, n, m);  // ���������

    if (c){
        delete[] c;  // �ͷ�������ڴ�
        c = nullptr;
    }

    return 0;
}

void InitMatrix(int arr[][MAX], int n, int m)  
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << "������a[" << i << "][" << j << "]: " << endl;
            cin >> arr[i][j];
        }
    }
}

int* Multiply(int a[][MAX], int b[][MAX], int n, int k, int m)
{
    int* c = new int[n * m];  // Ϊ������������ڴ�

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
