#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
// ��������ṹ��
struct Fraction {
    int numerator; // ����
    int denominator; // ��ĸ
};

// �����Լ��
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// ��������Ϊ������
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

// ��С��ת��Ϊ����
Fraction decimalToFraction(double decimal) {
    Fraction f;
    int decimalDigits = to_string(decimal).length() - 2; // С�����ֵ�λ��
    int denominator = pow(10, decimalDigits); // ��ĸ
    int numerator = decimal * denominator; // ����
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
