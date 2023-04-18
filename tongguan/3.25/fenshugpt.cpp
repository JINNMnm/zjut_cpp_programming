#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
// 定义分数结构体
struct Fraction {
    int numerator; // 分子
    int denominator; // 分母
};

// 求最大公约数
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// 将分数化为最简分数
Fraction simplify(Fraction f) {
    if (f.numerator == 0) {
        f.denominator = 1;
    } else {
        int div = gcd(abs(f.numerator), abs(f.denominator));
        f.numerator /= div;
        f.denominator /= div;
    }
    return f;
}

// 将小数转化为分数
Fraction decimalToFraction(double decimal) {
    Fraction f;
    int decimalDigits = to_string(decimal).length() - 2; // 小数部分的位数
    int denominator = pow(10, decimalDigits); // 分母
    int numerator = decimal * denominator; // 分子
    f.numerator = numerator;
    f.denominator = denominator;
    f = simplify(f);
    return f;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        double d;
        cin >> d;
        Fraction f = decimalToFraction(d);
        cout << f.numerator << "/" << f.denominator << endl;
    }
    return 0;
}
