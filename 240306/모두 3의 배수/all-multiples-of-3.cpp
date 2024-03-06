#include <iostream>
using namespace std;

int main() {
    bool res = false;

    for(int i=0; i<5; i++) {
        int num;
        cin >> num;

        if(num%3==0) {
            res = false;
        }
        else {
            res = true;
            break;
        }
    }

    if(res == true) {
        cout << 0;
    }
    else {
        cout <<1;
    }
    return 0;
}