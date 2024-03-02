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
	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0 && i % 4 != 0) continue;
		else if ((i / 8) % 2 == 0) continue;
		else if (i % 7 < 4) continue;
		else cout << i << " ";
	}

	return 0;
}