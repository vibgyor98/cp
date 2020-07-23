#include <iostream>
#include <cstring>
using namespace std;

#define ll long long

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t;
	cin>>t;
	while(t--) {
		ll n; cin>>n;
		ll a[n];
		ll pre[n];
		memset(pre, 0, sizeof(pre));
		pre[0] = 1;
		
		ll sum = 0;
		for(ll i=0; i<n; i++) {
			cin>>a[i];
			sum += a[i];
			sum %= n;
			//handlinf -ve values
			sum = (sum+n)%n;
			//cumulative sum and updating Bucket
			pre[sum]++;
		}

		ll ans = 0;
		for(ll i=0; i<n; i++) {
			ll m = pre[i];
			//mC2
			ans += (m)*(m-1)/2;
		}
		cout<<ans<<"\n";
	}

	return 0;
}

//PIGEON HOLE THEOREM

/*
Constraints
1<=T<=10
1<=N<=10^5
|ai|<=10^9

input
2
5
1 1 1 1 1
5
5 5 5 5 5

output
1
15

Explanation
In first test case, there is only one sub-array [1, 1, 1, 1, 1], 
such that 1+1+1+1+1=5, which is divisible by N=5
*/