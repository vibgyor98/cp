#include <bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n], target = 0, cnt = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) {
			sum += a[i];
			if(sum == target) {
				cout << "yes" <<"\n";
				break;
				cnt--;
			} else {
				cnt++;
			}
		}
	}
	return 0;
}