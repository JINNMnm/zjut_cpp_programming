#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int newnum(int n){
	int sum = 0;
	for(int i = 0;i < 3;i++){
		sum = sum * 10 + n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int n;
	cin >> n;
	while(n--)
	{
		int m;
		cin >> m;
		int * a = new int [m];
		for(int i = 0;i < m;i++) {
			cin >> a[i];
		}
		for(int i = 1;i < m;i++){
			for(int j = 0;j < m - i;j++){
				if(newnum(a[j]) > newnum(a[j + 1]) ){
					swap(a[j],a[j+1]);
				}
			}
		}
		for(int i = 0;i < m;i ++ ){
			cout << a[i] << ' ';
		}
		cout <<endl;
		delete [] a;
	}
    return 0;
}