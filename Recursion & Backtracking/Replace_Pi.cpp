#include <iostream>
#define ll long long
#define MOD 1000000007
using namespace std;

char out[100000];
int k = 0;
void replace(char *a, int i) {
	if(a[i] == '\0') {
		out[k++] = '\0';
		return;
	} 
	if(a[i] == 'p' && a[i + 1] == 'i') {
		out[k++] = '3';
		out[k++] = '.';
		out[k++] = '1';
		out[k++] = '4';
		replace(a, i + 2);
	} else {
		out[k++] = a[i];
		replace(a, i + 1);
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t;
	cin >> t;
	while(t--) {
		char a[100];
		cin >> a;
		replace(a, 0);
		cout << out << "\n";
		k = 0;
	}
	return 0;
}

/*
input
3
xpix
xabpixx3.15x
xpipippixx

output
x3.14x
xab3.14xx3.15x
x3.143.14p3.14xx

*/