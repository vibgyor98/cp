#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void solve(string s, int l) {
	for(int i=0; i<l; i++) {
		int cnt = 1;
		while(s[i]==s[i+1]) {
			cnt++;
			i++;
		}
		cout<<s[i]<<cnt;
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s;
	cin>>s;
	int l = s.length();
	// sort(s.begin(), s.end());
	// for(int i=0; i<l; i++) {
	// 	cout<<s[i];
	// }
	// cout<<"\n";
	solve(s,l);
	
	return 0;
}

/*
input
aaabbccds
sskkkkkkwaerrtss

output
a3b2c2d1s1
s2k6w1a1e1r2t1s2
*/