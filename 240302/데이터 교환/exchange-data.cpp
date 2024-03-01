#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int tmpa = a;
    int tmpb = b;
    int tmpc = c;
    b = tmpa;
    c = tmpb;
    a = tmpc;
    cout << a << "\n";
    cout << b << "\n";
    cout << c;
    return 0;
}