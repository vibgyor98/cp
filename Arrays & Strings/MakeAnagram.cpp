#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int solve(string a, string b) {
	int cnt1[26] = {}, cnt2[26] = {};
	for(int i = 0; a[i] != '\0'; i++) cnt1[a[i] - 'a']++;
	for(int i = 0; b[i] != '\0'; i++) cnt2[b[i] - 'a']++;
	int cnt = 0;
	for(int i = 0; i < 26; i++) {
		cnt += abs(cnt1[i] - cnt2[i]);
	}
	return cnt;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);

	string a, b;
    cin >> a >> b;
    cout << solve(a,b);
	return 0;
}