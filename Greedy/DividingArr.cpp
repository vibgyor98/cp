#include <iostream>
#include <climits>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];

		int div = n / 2;
		int sum1 = a[0], sum2 = a[div];
		for(int i = 1; i < div; i++) {
			sum1 -= a[i];
		}
		for(int i = div + 1; i < n; i++) {
			sum2 -= a[i];
		}

		cout << sum1 - sum2 <<" " << sum1 + sum2;
		cout << "\n";

		//debug
		// int diff = a[0];
		// for(int i = 1; i < n; i++) {
		// 	diff -= a[i];
		// }
		// cout << diff;
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