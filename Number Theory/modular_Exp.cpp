#include <iostream>
using namespace std;

#define ll long long

void solve(ll x, ll y, ll m) {
	x %= m;
	ll res = 1;
	while(y) {
		if(y & 1) {
			res = ((res % m) * (x % m)) % m;
		}
		x = ((x % m) * (x % m)) % m;
		y = y >> 1;
	}
	cout<<res;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll x,y,m;
	cin>>x>>y>>m;

	solve(x,y,m);
	
	return 0;
}

//(a*b)%c = ((a%c)*(b%c))%c

/*
Constraints
1<=a,b,c<=100000

input
2 2 3
output
1

Explanation
(2^2)mod 3=4 mod 3 = 1
*/