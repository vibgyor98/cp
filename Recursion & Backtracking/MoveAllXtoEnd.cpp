#include <bits/stdc++.h>
using namespace std;

void moveX(char* str, int i, int len) {
	if(i >= len) return;
	char ch = str[i];
	if(ch != 'x') cout << ch;
	moveX(str, i + 1, len);
	if(ch == 'x') cout << ch;
	return;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char str[1001];
	cin >> str;
	int len = strlen(str);
	moveX(str, 0, len);
	return 0;
}

/*

input
axbxc

output
abcxx

*/