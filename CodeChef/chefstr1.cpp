#include <iostream>
#define ll long long 
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0; i<n; i++) {
			cin>>a[i];
		}
		ll sum = 0, num;
		for(ll i=0,j=i+1; j<n; i++,j++) {
			if(a[j]>a[i]) {
				num = (a[j] - a[i]) - 1;
			} else {
				num = (a[i] - a[j]) - 1;
			}
			sum += num;
		}
		cout<<sum<<"\n";
	}

	return 0;
}

/*
input
2
6
1 6 11 6 10 11
4
1 3 5 7

output
15
3
*/