#include <iostream>
using namespace std;

#define ll long long 

void solve(ll *a, ll n) {
	ll ans[n];
	for(int i=0; i<n; i++) ans[i] = a[i];
	sort(a,a+n);
	for(int i = 0; i<n; i++) {
		if(ans[i]==) {
			cout<<"-1";
			break;
		}else cout<<a[i]+1<<" ";
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n; cin>>n;
	ll a[n];
	for(ll i=0; i<n; i++) cin>>a[i];
	solve(a,n);

	return 0;
}

/*
input
3
1 2 3

output
9

*/