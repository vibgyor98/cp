#include <iostream>
using namespace std;

#define ll long long
#define LIMIT 100000007

bool sieve[LIMIT];
void primeSieve(bool *sieve) {
	//built sieve
	for(ll i=2; i*i<=LIMIT; i++) {
		//chk for marked pos
		if(!sieve[i]) {
			//start from it's square
			for(ll j=i*i; j<=LIMIT; j+=i) {
				//mark as not prime
				sieve[j] = 1;
			}
		}
	}
	//cornor case
	sieve[0] = sieve[1] = 1;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	primeSieve(sieve);
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