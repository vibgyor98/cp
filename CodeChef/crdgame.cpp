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
		ll round;
		cin>>round;
		ll chef = 0, mort = 0;
		ll n1, n2;
		for(ll i=0; i<round; i++) {
			ll dck1, dck2;
			cin>>dck1>>dck2;
			ll sum1 = 0, sum2 = 0;
			while(dck1!=0) {
				n1 = dck1%10;
				sum1 += n1;
				dck1 = dck1/10;
			}
			while(dck2!=0) {
				n2 = dck2%10;
				sum2 += n2;
				dck2 = dck2/10;
			}
			if(sum1 > sum2) chef++;
			else if (sum1 == sum2) {
				chef++;
				mort++;
			} else mort++;
		}
		if(chef > mort) cout<<"0"<<"  "<<chef<<"\n";
		else if(chef==mort) cout<<"2"<<"  "<<chef<<"\n";
		else cout<<"1"<<"  "<<mort<<"\n";
	}

	return 0;
}

/*
input
2
3
10 4
8 12
7 6
2
5 10
3 4
output
0 2
2 1
*/