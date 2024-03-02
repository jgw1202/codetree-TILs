#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    sort(a,b,c);
    cout << b;
    return 0;
}