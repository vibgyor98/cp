#include <bits/stdc++.h>
using namespace std;

#define ll		long long int
#define ld		long double
#define mod     1000000007
#define inf     1e18

int longestNested(int* a, int n) {
	int res = 0;
	for (int i = 0; i < n; i++) {
		int curr = a[i];
		int cnt  = 0;
		while (a[i] != INT_MIN) {
			int temp = curr;
			curr = a[curr];
			cnt++;
			a[temp] = INT_MIN;
		}
		res = max(res, cnt);
	}
	return res;
}

int main() {
	clock_t begin = clock();
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Start code here....
	int n;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n; i++) cin >> a[i];
	int ans = longestNested(a, n);
	cout << ans;


#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}

/*
input
7
5 4 0 3 1 6 2
output
4
*/