#include <bits/stdc++.h>
using namespace std;

vector<string> v;
vector<string> alphabet = { "A","B","C","D",
                    		"E","F","G","H","I","J","K","L",
                    		"M","N","O","P","Q","R","S","T",
                    		"U","V","W","X","Y","Z" };
int n;
void mapToString(string num, int pos, string str) {
	if(pos >= num.size()) {
		v.push_back(str);
		return;
	}
	for(int i = 1; i <= 2; i++) {
		if(pos + i > n) continue;
		string temp = num.substr(pos, i);
		int digit = stoi(temp);
		if(digit > 26) continue;
		str += alphabet[digit - 1];
		mapToString(num, pos + i, str);
		str.pop_back();
	}
	return;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int N;
	cin >> N;
	string str = to_string(N);
	string temp;
	n = str.size();
	mapToString(str, 0, temp);
	for(string s : v) {
		cout << s << "\n";
	}
	return 0;
}

/*

input
123

output
ABC
AW
LC

Explanation
'1' '2' '3' = ABC
'1' '23' = AW
'12' '3' = LC

*/