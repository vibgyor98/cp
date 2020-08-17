#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//comparing based on finishing time
bool cmp(pair<int,int> p1, pair<int,int> p2) {
	return p1.second < p2.second;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		int n,s,e;
		vector<pair<int,int>> v;
		cin>>n;
		for(int i=0; i<n; i++) {
			cin>>s>>e;
			v.push_back(make_pair(s,e));
		}
		
		//Activity Selection
		sort(v.begin(), v.end(), cmp);
		//pick atcivity
		int res=1;
		int finishing=v[0].second; //finishing time of activity
		for(int i=1; i<n; i++) {
			if(v[i].first >= finishing) {
				finishing = v[i].second;
				res++;
			}
		} 
		cout<<res<<"\n";
		v.clear();
	}


	return 0;
}

/*
Sample Input: (empty lines just for clarity)
3
3
3 9
2 8
6 9

4
1 7
5 8
7 8
1 8

6
7 9
0 10
4 5
8 9
4 10
5 7

Sample Output:
1
2
3
*/