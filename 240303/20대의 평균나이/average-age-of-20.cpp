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
	double cnt = 0.0;
	while (true) {
		int n;
		cin >> n;
		if (n < 20 || n > 29) {
			break;
		}
		sum += n;
		cnt++;
	}
	cout << fixed;
	cout.precision(2);
	cout << sum / cnt;
	return 0;
}