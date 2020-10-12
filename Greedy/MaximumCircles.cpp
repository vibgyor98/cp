#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//comparing based on finishing time
bool cmp(pair<int,int> a, pair<int,int> b) {
	if((a.first + a.second) == (b.first + b.second)) {
		return (a.first - a.second) < (b.first - b.second);
	} else {
		return (a.first + a.second) < (b.first + b.second);
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n, c, r, ans = 1;
	cin >> n;
	vector<pair<int, int>> v;
	for(int i = 0; i < n; i++) {
		cin >> c >> r;
		v.push_back(make_pair(c,r));
	}

	sort(v.begin(), v.end(), cmp);

	int val = v[0].first + v[0].second;
	for(int i = 0; i < n - 1; i++) {
		if(val <= v[i+1].first - v[i+1].second) {
			ans++;
			val = v[i+1].first + v[i+1].second;
		}
	}
	cout << n - ans;

	return 0;
}

/*
Constraints
1<=n<=10^5 |c|<=10^9 1<=r<=10^9

Sample Input
4
1 1
2 1
3 1
4 1

Sample Output
2

Explanation
We can remove 1st and 3rd circle, or 2nd and 4th circle.

*/