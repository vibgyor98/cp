#include <bits/stdc++.h>
using namespace std;

#define ll		long long int
#define ld		long double
#define mod     1000000007
#define inf     1e18

ll solve(ll* a, ll n) {
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= 0) {
			ld sr = sqrt(a[i]);
			if (sr * sr == a[i]) res++;
		}
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
	ll n;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	ll ans = solve(a, n);
	cout << ans;

#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}