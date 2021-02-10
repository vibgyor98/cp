#include <bits/stdc++.h>
using namespace std;

#define ll		long long int
#define ld		long double
#define mod     1000000007
#define inf     1e18

ll solve(ll* a, ll n) {
	ll res = 0;
	sort(a, a + n);
	ll x = a[0];
	ll y = a[1];
	ll z = a[n - 1];
	if (x == y && y == z) {
		return 0;
	} else {
		// ll sum = llabs(x - y);
		// res += sum;
		// sum = llabs(y - z);
		// res += sum;
		// sum = llabs(z - x);
		// res += sum;
		res = 2 * (z - x);
	}
	return llabs(res);
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
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll a[n];
		for (ll i = 0; i < n; i++) {
			cin >> a[i];
		}
		ll ans = solve(a, n);
		cout << ans << "\n";
	}

#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}

/*
Example Input
3
3
2 7 5
3
3 3 3
5
2 2 2 2 5
Example Output
10
0
6


After sorting Let Ax smallest, let Ay be Ay, and Az is max.
Ay will always be equal or more than Ax And equal or less than Az
So |Ax-Ay|+|Ay-Az|+|Az-Ax| becomes Ay-Ax + Az-Ay + Az-Ax
That Is nothing but -Ax + Az+Az -Ax = 2*(Az-Ax)

*/