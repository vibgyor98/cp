#include <iostream>
#include <string>
#include <vector>
using namespace std;

string searchIn[] = { "prateek", "sneha", "deepak", "arnav", "shikha", "palak","utkarsh", "divyam", "vidhi", "sparsh", "akku" };
string strings[] = {"","", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void keypad(string s, int i, int j, char* out, char* out1) {
	if(s[i] == '\0') {
		out[j] = '\0';
		for(int pos = 0; pos < 11; pos++) {
			int found = searchIn[pos].find(out);
			if(found != -1) cout << searchIn[pos] <<"\n";
		}
		return;
	}
	int digit = s[i] - '0';
	if(digit == 0 || digit == 1) keypad(s, i + 1, j, out, out1);

	for(int k = 0; strings[digit][k] != '\0'; k++) {
		out[j] = strings[digit][k];
		keypad(s, i + 1, j + 1, out, out1);
	}
}

int main() { 

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s;
	char out[100];
	char out1[100];
	cin >> s;

	keypad(s,0,0,out,out1);

	return 0;
}

/*
input
34

output
vidhi
divyam
sneha

Explanation
*dg         *eg         *fg
*dh            *eh         *fh
*di            *ei         *fi
Corresponding strings are output.

vidhi contains dh
divyam contains di
sneha contains eh

*/