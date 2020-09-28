#include <iostream>
#include <string>
using namespace std;

void permute(string in, string out, string x, bool chk) {
	if(in.length() == 0) {
		if(x.compare(out) != 0) {
			cout << x << "\n";
			return;
		}
	}
	for(int j = 0; in[j] != 0; j++) {
		string ros = in.substr(0, j) + in.substr(j + 1);
		char ch = in[j];
		if(chk) {
			permute(ros,out,x+ch,chk);
		} else {
			if(in[j] >= in[0]) {
				permute(ros,out,x+ch,chk || ch > in[0]);
			} else if(in[j] < in[ch]) {}
		}
	}
}

int main() { 

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string in, out;
	cin >> in;
	out = in;
	permute(in,out,"",false);

	return 0;
}

/*
Constraints
Length of string <= 10

input
abc

output
acb
bac
bca
cab
cba

Explanation
The possible permutations of string "cab" are 
"abc" , "acb" ,"bac" , "bca" , "cab" and "cba". 
Only one of them is lexicographically greater than "cab". 
We only print "cba".

*/