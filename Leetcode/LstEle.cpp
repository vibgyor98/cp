#include <iostream>
#define ll long long
using namespace std;

void solve(ll *a, ll n, ll x) {
	ll i = n-1;
	for(; i>=0; i--) {
		if(a[i]==x) {
			cout<<i;
			break;
		}
	}
	if(i==0 || i<0) {
		cout<<"-1";
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0; i<n; i++) {
		cin>>a[i];
	}
	ll x;
	cin>>x;
	solve(a,n,x);

	return 0;
}

/*
input
7
86 -16 77 65 45 77 28
77

output
5

Last occurence of 77 is found at index = 5.
*/