#include <iostream>
using namespace std;
int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int tmp = a+b+c;
    a = tmp;
    b = tmp;
    c = tmp;
    cout << a << " " << b << " " << c;
    return 0;
}