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

	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		int num;
		cin >> num;
		if (num % 2 == 0) {
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}