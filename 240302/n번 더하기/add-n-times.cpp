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

	int a, n;
	cin >> a >> n;
	for (int i = 0; i < n; i++) {
		a = a + n;
		cout << a << "\n";
	}

	return 0;
}