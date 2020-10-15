#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2) {
	return p1.first > p2.first;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;
	int a[n], load = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		load += a[i];
	}

	//load is avg, ans doesn't exist
	if(load % n != 0) {
		cout <<"-1";
		return 0;
	}

	//logic
	load = load / n;
	int diff = 0, maxLoad = 0;
	for(int i = 0; i < n; i++) {
		diff += (a[i] - load);
		int ans = max(diff, -diff);
		maxLoad = max(maxLoad, ans);
	}
	cout << maxLoad;

	return 0;
}

/*
Constraints
0 < N < 100000

Output Format
Output Number denoting the minimum number of operations required.

Sample Input
8
16 17 15 0 20 1 1 2
Sample Output
23

*/