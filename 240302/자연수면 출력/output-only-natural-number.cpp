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
	if (a <= 0) cout << 0;
	else {
		for (int i = 0; i < n; i++) {
			cout << a;
		}
	}
	

	return 0;
}