#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		int n, x;
		cin>>n;
		vector<int> v;
		for(int i=0; i<n; i++) {
			cin>>x;
			v.push_back(x);
		}
		next_permutation(v.begin(), v.end());
		for(int i=0; i<n; i++) {
			cout<<v[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

// input

// 2
// 3
// 1 2 3 
// 3
// 3 2 1

// output

// 1 3 2
// 1 2 3
