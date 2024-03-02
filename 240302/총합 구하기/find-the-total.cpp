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

	int sum = 0;
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (i % 6 == 0 && i % 8 != 0) {
			sum += i;
		}
	}
	cout << sum;

	return 0;
}