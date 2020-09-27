#include <iostream>
#include <string>
using namespace std;

char keypad[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

void solve(char* in, char* out, int i, int j) {
	if(in[i] == '\0') {
		out[j] == '\0';
		cout << out <<"\n";
		return;
	}

	int digit = in[i] - '0';
	for(int k = 0; keypad[digit][k] != '\0'; k++) {
		out[j] = keypad[digit][k];
		solve(in, out, i+1, j+1);
	}
}

int main() { 

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char in[11];
	char out[11] = {0};
	cin >> in;
	solve(in,out,0,0);

	return 0;
}

/*
input
12

output
.a
.b
.c
+a
+b
+c
@a
@b
@c
$a
$b
$c

Explanation
For code 1 the corresponding string is .+@$ and abc corresponds to code 2.

*/