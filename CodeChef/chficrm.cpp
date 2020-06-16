#include<iostream>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		int a[3] = {0};
		int n, chk=0;
		cin>>n;
		for(int i=0; i<n; i++) {
			int coin;
			cin>>coin;
			if(coin==5) {
				a[0]++;
			} else if(coin==10) {
				if(a[0]>=1) {
					a[0]--;
					a[1]++;
				} else {
					chk++;
				}
			} else {
				if(a[1]>=1) {
					a[1]--;
					a[2]++;
				} else if(a[0]>=2) {
					a[0]-=2;
					a[2]++;
				} else {
					chk++;
				}
			}
		}
		if(chk==0) {
			cout<<"YES"<<"\n";
		} else {
			cout<<"NO"<<"\n";
		}
	}

	return 0;
}