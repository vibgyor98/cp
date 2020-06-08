#include<iostream>
#include<cstring>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int ans = 0;
		for(int i=0; i<s.length(); i++) {
			if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x')) {
				ans++;
				i++;
			}
		}
		cout<<ans<<"\n";
	}


	return 0;
}