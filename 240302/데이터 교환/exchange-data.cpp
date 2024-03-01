#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    b = a;
    c = b;
    a = c;
    cout << a << "\n";
    cout << b << "\n";
    cout << c;
    return 0;
}