#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

bool hasCommonDivisor(int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (gcd(i, 1920) != 1 && gcd(i, 2880) != 1) {
            return true;
        }
    }
    return false;
}

int main() {
    int a, b;
    cin >> a >> b;

    if (hasCommonDivisor(a, b)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}