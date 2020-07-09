#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

ll solve(ll *p, ll n, ll k) {
	sort(p,p+n);
	ll i = 0;
	while(k>0) k-=p[i++];
	return i-1;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n,k;
	cin>>n>>k;
	ll p[n];
	for(int i=0; i<n; i++) cin>>p[i];
	cout<<solve(p,n,k);

	return 0;
}

/*
input
7 50
1 12 5 111 200 1000 10

output
4
*/