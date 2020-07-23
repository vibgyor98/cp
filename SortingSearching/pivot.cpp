#include <iostream>
using namespace std;

#define ll long long
#define MOD 10000007


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0; i<n; i++) cin>>a[i];
	ll s = 0;
	ll e = n-1;
	while(s<=e) {
		ll m = s+(e-s)/2;
		if(a[m]<a[m-1]) {
			cout<<m-1;
			break;
		} else if(a[m]>a[m+1]){
			cout<<a[m];
			break;
		} else if(a[e]<=m) {
			s=m+1;
		} else {
			e=m-1;
		}
	}
	return 0;
}

/*
input
5
4 5 1 2 3

Output
1

Explanation
Here, 5 is the pivot element. 
Thus the output is 1 which is 5's index.
*/