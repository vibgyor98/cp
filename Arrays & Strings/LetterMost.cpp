#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;
	char s[N];
	for(int i = 0; i < N; i++) cin >> s[i];

	int freq[26] = {0};
	for(int i = 0; i < N; i++) {
		freq[s[i] - 'a']++;
	}
	sort(freq,freq + 26, greater<int>());
	cout << freq[0];

	return 0;
}