#include <iostream>
using namespace std;

int cnt = 0;
void subset_Sum(int* a, int i, int sum, int n) {
	if(i == n) {
		if(sum == 0) {
			cnt++;
		}
		return;
	}
	//include current sum ele
	subset_Sum(a,i+1,sum+a[i],n);

	//exclude current sum ele 
	subset_Sum(a,i+1,sum,n);
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		//function desc: arr, iterator, sum, sizeofArr
		subset_Sum(a,0,0,n);
		if(cnt > 1) cout <<"Yes" <<"\n";
		else cout <<"No" <<"\n";
		cnt = 0;
	}
	return 0;
}

/*
input
1
4
1 3 2 -3

output
Yes

Explanation
The sum of the subset {3,-3} is zero.
*/