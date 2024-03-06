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

    bool found = false;
    for (int i = a; i <= b; ++i) {
        if (gcd(i, 1920) != 1 && gcd(i, 2880) != 1) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}