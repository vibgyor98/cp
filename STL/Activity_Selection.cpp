#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//comparing each start and end time
bool comp(const pair<int, int>&x, const pair<int, int>&y) {
	return x.second < y.second;
}

int solve(vector<pair<int,int>>v) {
	int count = 1;
	for(auto it1 = v.begin(), it2 = v.begin() + 1; it2 != v.end(); it2++) {
		if(it2->first >= it1->second) {
			it1 = it2;
			count++;
		}
	}
	return count;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<pair<int,int>>v;
		int start, end;
		for(int i=0; i<n; i++) {
			cin>>start>>end;
			v.push_back(make_pair(start,end));
		}
		sort(v.begin(), v.end(), comp);
		cout<<solve(v)<<"\n";
	}

	return 0;
}


/*
input
1
3
10 20
12 15
20 30

output
2

Explanation
Person only do 0th and 2nd activities.

*/