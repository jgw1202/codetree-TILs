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

	int sum = 1;
	int a, b;
	cin >> a >> b;
	for (int i = 1; i <= b; i++) {
		if (i % a == 0) {
			sum *= i;
		}
	}
	cout << sum;

	return 0;
}