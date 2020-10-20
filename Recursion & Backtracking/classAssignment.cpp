#include <iostream>
#include <unordered_map>
#include <cstring>
#include <list>
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

	int t; 
	cin >> t;
	ll a[45];
	a[0] = 1, a[1] = 2;
	for(int i = 2; i < 45; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	for(int i = 1; i <= t; i++) {
		cout << "#" << i << " : ";
		int N;
		cin >> N;
		cout << a[N] << "\n";
	}
	

	return 0;
}

/*
Constraints
1<=T<=20
1<=n<=25

Output Format
For each test case print the number of such n digit integer.

Sample Input
3
1
2
3
Sample Output
#1 : 2
#2 : 3
#3 : 5
Explanation
For n=1 : integers = a, b . For n=2 : integers = aa, ab, ba 
For n=3 : integers = aaa, aab, aba, baa, bab

*/