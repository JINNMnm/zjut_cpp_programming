#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
bool contain(int num,int *a,int n){
	for(int i = 0;i < n;i++){
		if(num == a[i]){
			return true;
		}
	}
	return false;
}
void Display(int * b,int n){
	for(int i = 0;i < n;i++){
		cout << b[i] << ' ';
	}
	cout << endl;
}
int newnum(int n){
	int sum = 0;
	for(int i = 0;i < 3;i++){
		sum = sum * 10 + n%10;
		n/=10;
	}
	return sum;
}
void SortArray(int *p, int n){
	for(int i = 1;i < n ;i++){
		for(int j = 0 ;j < n - i ;j++){
			if(newnum(p[j]) > newnum(p[j+1])){
				swap(p[j],p[j+1]);
			}
		}
	}
	
}
void DestroyArray(int *p){
	delete [] p;
}
int main(){
	int * p;
	int n ;
	while(cin >> n){
		p = new int[n];
		srand(time(NULL));
		int count = 0;
		while(count < n){
			int num = rand();
			if(!contain(num,p,count)){
				p[count++] = num;
			}
		}
		Display(p,n);
		SortArray(p,n);
		Display(p,n);
		DestroyArray(p);
	}
	return 0;
}