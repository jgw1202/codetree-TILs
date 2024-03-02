#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int counter = 1;
	while (true) {
		if (n / counter <= 1) {
			break;
		}
		n = n / counter;
		counter++;
	}
	cout << counter;
	return 0;
}