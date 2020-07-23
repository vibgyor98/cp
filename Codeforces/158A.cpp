#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

void solve(ll a[], ll n, ll k) {
	for(ll i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<"\n";
	ll cnt = count(a,a+k,0);
	if(cnt>0) {
		cout<<k+1-cnt;
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
	ll k;
	cin>>k;
	solve(a,n,k);

	return 0;
}

/*
input
8 5
10 9 8 7 7 7 5 5
output
6

input
4 2
0 0 0 0
output
0
*/