#include <iostream>
#include <string>
#include <vector>
using namespace std;

int cnt = 0;
char keypad[][10] = { "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
void printKeypadString(char* in, char* out, int i, int j) {
	if(in[i] == '\0') {
		cnt++;
		out[j] = '\0';
		cout << out <<" ";
		return;
	}
	int digit = in[i] - '0';
	for(int k = 0; keypad[digit][k] != '\0'; k++) {
		out[j] = keypad[digit][k];
		printKeypadString(in,out,i+1,j+1);
	}
}

int main() { 

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char in[100];
	char out[100];
	cin >> in;
	printKeypadString(in,out,0,0);
	cout << "\n" << cnt;


	return 0;
}

/*
input
12

output
ad ae af bd be bf cd ce cf
9

Explanation
1 can correspond to 'a' , 'b' or 'c' .
2 can correspond to 'd', 'e' or 'f'.
We print all combinations of these

*/