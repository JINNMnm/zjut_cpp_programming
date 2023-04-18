#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
void InitMatrix(int *p,int n,int k){
	for(int i = 0;i < n;i++){
		for(int j = 0;j < k;j++){
			cin >> p[i*k+j];
		}
	}
}

int* Multiply(int * a,int *b,int n,int k,int m){
	int * p =new int [n*m];
	for(int i = 0;i <n;i++){
		for(int j = 0;j < m;j++){
			int sum = 0;
			for(int o = 0;o < k;o++){
				sum += a[i * k + o]*b[o * m +j];
			}
			p[i*m + j] = sum;
		}
	}
	return p;
}
void Display(int * p,int n,int m){
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cout << p[i * m + j] << ' ';
		}
		cout << endl;
	}
	delete [] p;
}
int main()
{  
	const int n=2;
	const int k=3;
	const int m=4;
	int a[n][k], b[k][m];
	int *c;
	InitMatrix(&a[0][0],n,k);
	InitMatrix(&b[0][0],k,m);
	c=Multiply(&a[0][0],&b[0][0],n,k,m);
	Display(c,n,m); 
	delete [] c;
	return 0;   
}   
