#include <iostream>
#include <map>
using namespace std;

void solve(int *a, int n) {
	unordered_map<int,int> m;
	for(int i=0; i<n; i++) m[a[i]++];
	int cnt = 0;
	for(auto i:m)
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	solve(a,n);

	return 0;
}

/*
input
8
2 2 3 1 3 2 1 1 

output
1 2
*/