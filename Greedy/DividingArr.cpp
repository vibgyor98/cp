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
		ll a[n];
		for(int i = 0; i < n; i++) cin >> a[i];

		//Greedy logic
		if(n == 1) cout << a[0] << " " << a[0] << "\n";
		else {
			sort(a,a+n);
			int minsum = 0, maxsum = 0;
			for(int i = 0; i < n; i += 2) {
				minsum += abs(a[i] - a[i + 1]);
			}
			int start = 0, end = n - 1;
			while(start <= end) {
				maxsum += abs(a[start] - a[end]);
				start++;
				end--;
			}
			cout << minsum << " " << maxsum << "\n";
		}
	}

	return 0;
}

/*
Constraints
1<=T<=10
1<=n<=10^5
|Ai|<=10^9

Output Format
For each test case, 
print the minimum and maximum value 
of differences between two arrays.

Sample Input
1
4
12 -3 10 0
Sample Output
5 25
*/