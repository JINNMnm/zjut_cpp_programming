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
        f[i] = f[i - 1] + f[i - 2]; // 动态规划求解 Fibonacci 数列
    }

    cout << f[n] << endl; // 输出第 n 项 Fibonacci 数
    delete [ ] f;
    }
    
    return 0;
}
