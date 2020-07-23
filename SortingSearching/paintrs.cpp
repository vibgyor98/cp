#include <iostream>
using namespace std;

#define ll long long
#define MOD 10000003

bool okay(ll *a, ll n, ll k, ll cut) {
	ll pcnt = 1;
	ll ucnt = 0;
	for(ll i=0; i<n; i++) {
		if(a[i]>cut) return false;
		if((ucnt+a[i])<=cut) ucnt+=a[i];
		else {
			pcnt++;
			ucnt=a[i];
			if(pcnt>k) return false;
		}
	}
	return true;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n,k,t;
	cin>>n>>k>>t;
	ll a[n];
	for(ll i=0; i<n; i++) cin>>a[i];
	ll sum=0, max=a[0];
	for(ll i=0; i<n; i++) {
		if(a[i]>max) max = a[i];
		sum+=a[i];
	}
	ll start = max;
	ll end = sum;
	ll ans;
	while(start<=end) {
		ll mid = start+(end-start)/2;
		if(okay(a,n,k,mid)) {
			ans = min(ans,mid);
			end=mid-1;
		} else {
			start=mid+1;
		}
	}
	cout<<(((ans%MOD)*t)%MOD);
	return 0;
}

/*
input
2 2 5
1 10

Output
50

Explanation
The first painter can paint the first board in 5 units of time and 
the second painter will take 50 units of time to paint the second board. 
Since both can paint simultaneously , 
the total time required to paint both the boards is 50.
*/