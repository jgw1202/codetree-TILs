#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;

    bool common_divisor_exists = false;

    int common_divisor = gcd(1920, 2880);


    for (int i = a; i <= b; ++i) {
        if (i % common_divisor == 0 && common_divisor != 1) { 
            common_divisor_exists = true;
            break;
        }
    }


    if (common_divisor_exists) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}