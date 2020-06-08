#include<iostream>
#include<vector>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		int p,K,sum = 0;
		int actSum = 0;
		cin>>p>>K;
		vector<int> v(p);
		for(int i=0; i<p; i++) {
			int in;
			cin>>in;
			actSum+=in;
			if(in>K) {
				v.push_back(K);
				sum+=K;
			} else {
				v.push_back(in);
				sum+=in;
			}
		}
		int res = actSum - sum;
		cout<<res<<"\n";
	}


	return 0;
}