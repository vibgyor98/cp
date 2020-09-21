#include <iostream>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(ll n, ll m) {
	ll count[n + 1];
	count[0] = count[1] = 1;
	for(int i = 2; i <= n; i++) {
		if(i >= m) {
			count[i] = count[i - 1] + count[i - m];
		} else if(i < m || i == 1) {
			count[i] = 1;
		} else {
			count[i] = 2;
		}
	}
	cout << count[n] % MOD <<"\n";
}

// long long func(int N,int M)
// {
//     long long dp[N+1];
//     dp[0]=dp[1]=1;
//     for(int i=2;i<=N;i++)
//         if(i>=M)
//             dp[i]=(dp[i-1]+dp[i-M])%C;
//         else
//             dp[i]=dp[i-1];
//     return dp[N];
// }

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t;
	cin >> t;
	while(t--) {
		ll n, m;
		cin >> n >> m;
		solve(n, m);
	}
	return 0;
}

/*
input
2
2 3
4 4

output

*/