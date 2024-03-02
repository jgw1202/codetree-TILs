#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    getline(cin, input);


    string xxxx = input.substr(4, 4);
    string yyyy = input.substr(9, 4);

    cout << "010-" << yyyy << "-" << xxxx << endl;

    return 0;
}