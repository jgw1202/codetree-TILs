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

	int cnt = 0;
	while (true) {
		if (n >= 1000) break;
		if (n % 2 == 0) {
			n = n * 3 + 1;
		}
		else {
			n = n * 2 + 2;
		}
		cnt++;
	}
	cout << cnt;
	return 0;
}