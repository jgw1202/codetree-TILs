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
	if (n % 2 == 0) {
		while (n <= 1000) {
			cnt++;
			n = n * 3 + 1;
		}
	}
	else {
		while (n <= 1000) {
			cnt++;
			n = n * 2 + 2;
		}
	}
	cout << cnt;
	return 0;
}