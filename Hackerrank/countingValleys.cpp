#include <iostream>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	char valley[n];
	for(int i=0; i<n; i++) cin>>valley[i];
	int sum = 0, count = 0;
	for(int i=0; i<n; i++) {
		if(valley[i]=='U') {
			if(++sum==0) count++;
		} else sum--;
	}
	cout<<count;

	return 0;
}

/*
input
8
UDDDUDUU
output
1
*/