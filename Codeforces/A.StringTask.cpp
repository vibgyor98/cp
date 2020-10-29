#include <iostream>
#include <string>
using namespace std;

void toggle(string& str) {
	int len = str.length();
	for(int i = 0; i < len; i++) {
		int ch = str[i];
		if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I'
			|| str[i] == 'O' || str[i] == 'U' || str[i] == 'Y'
			|| str[i] == 'a' || str[i] == 'e' || str[i] == 'i'
			|| str[i] == 'o' || str[i] == 'u' || str[i] == 'y') {
			continue;
		} else {
			if(isupper(ch)) {
				str[i] = tolower(ch);
				cout << "." << str[i];
			}
			else {
				str[i] = tolower(ch);
				cout << "." << str[i];
			}
		}
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);

	string str;
	cin >> str;
	toggle(str);

	return 0;
}

/*

tour
.t.r

Codeforces
.c.d.f.r.c.s

aBAcAba
.b.c.b


*/