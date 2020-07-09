#include <iostream>
#include <algorithm>
using namespace std;

//compare fun
bool comp(string a, string b) {
	//checks if b present completely in a and vice-versa
	//return whose length is greater
	if(a.find(b)==0 || b.find(a)==0) return a.length() > b.length();
	//else return in lexicographical order
	return a<b;
}

void solve(string *s, int n) {
	sort(s,s+n,comp);
	for(int i=0; i<n; i++) cout<<s[i]<<"\n";
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n; cin>>n;
	string str[n];
	for(int i=0; i<n; i++) cin>>str[i];
	solve(str,n);

	return 0;
}

/*
input
3
bat
apple
batman

output
apple
batman
bat
