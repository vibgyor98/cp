#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define MOD 1000000007

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);

	ll t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		ll cost[n], petrol[n];
		for(int i = 0; i < n; i++) cin >> cost[i];
		for(int i = 0; i < n; i++) cin >> petrol[i];
		ll minCost = cost[0];
		ll total = minCost * petrol[0];
		for(int i = 1; i < n; i++) {
			if(minCost > cost[i]) {
				minCost = cost[i];
				total = total + minCost * petrol[i];
				continue;
			} else {
				total = total + minCost * petrol[i];
				continue;
			}
		}
		cout << total <<"\n";
	}

	return 0;
}

/*
Constraints
1 ≤ T ≤ 5
1 ≤ N ≤ 105
1 ≤ C[i], L[i] ≤ 105

Output Format
For each of the test cases, output the required answer in a separate line.

Sample Input
1
2
5 1 
1 2
Sample Output
7
*/