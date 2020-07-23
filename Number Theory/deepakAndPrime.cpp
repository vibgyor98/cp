#include <iostream>
using namespace std;

#define ll long long
#define LIMIT 10000007

bool sieve[LIMIT];

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;

	//prime sieve
	sieve[0] = sieve[1] = 1;
	for(ll i=2; i*i<=LIMIT; i++) {
		if(!sieve[i]) {
			for(ll j=i*i; j<=LIMIT; j+=i) {
				sieve[j] = 1;
			}
		}
	}

	ll cnt = 1;
	while(n && cnt<LIMIT) {
		cnt++;
		if(!sieve[cnt]) {
			n--;
		}
	}
	cout<<cnt;
	return 0;
}

//Sieve of Eratosthenes

/*
Constraints
1<=n<=500000

input
1
output
2

input
2
output
3
*/