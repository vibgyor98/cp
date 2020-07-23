#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
	return (c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u');
}

void solve(string s) {
	int l=0, r=s.size()-1;
	while(l<r) {
		if(isVowel(s[l]) && isVowel(s[r])) {
			swap(s[l],s[r]);
			l++;
			r--;
		} else if(isVowel(s[l]) && !isVowel(s[r])) {
			r--;
		} else {
			l++;
		}
	}
	cout<<s<<"\n";
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		solve(s);
	}

	return 0;
}

/*
input
2
apple
friend

output
eppla
freind
*/