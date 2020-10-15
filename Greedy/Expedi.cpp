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
	vector<pair<int, int>> v;
	int d, f;
	for(int i = 0; i < n; i++) {
		cin >> d >> f;
		v.push_back(make_pair(f,d));
	}
	
	int l, p;
	cin >> l >> p;
	if(p >= l) {
		cout <<"0\n";
		return 0;
	}

	sort(v.begin(), v.end(), cmp);
	int cnt = 0;
	for(auto x : v) {
		p += x.first;
		cnt++;
		if(l <= p) {
			break;
		}
	}
	cout << cnt; 
	return 0;
}

/*
Constraints
1 <= N <= 10,000

1 <= P <= 1,000,000

Output Format
Output single integer denoting the minimum number of stops.

Sample Input
4
4 4
5 2
11 5
15 10
25 10
Sample Output
2
*/