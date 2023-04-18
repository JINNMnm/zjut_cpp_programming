#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    while(cin >> n){
    long long *f = new long long [n + 1];

    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2]; // ��̬�滮��� Fibonacci ����
    }

    cout << f[n] << endl; // ����� n �� Fibonacci ��
    delete [ ] f;
    }
    
    return 0;
}
