#include <iostream>
#include <stack>
using namespace std;

#define ll long long 

void solve(ll *hist, ll n) {
	stack<ll> s;
	ll tp, areaoftp, i = 0, maxArea = 0;
	while(i<n) {
		if(s.empty() || hist[s.top()] <= hist[i]) {
			s.push(i++);
		} else {
			tp = s.top();
			s.pop();
			areaoftp = hist[tp] * (s.empty() ? i : i - s.top() - 1);
			if(maxArea < areaoftp) maxArea = areaoftp;
		}
	} while(s.empty() == false) {
		tp = s.top();
		s.pop();
		areaoftp = hist[tp] * (s.empty() ? i : i - s.top() - 1);
		if(maxArea < areaoftp) maxArea = areaoftp;
	}
	cout<<maxArea;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n; cin>>n;
	ll hist[n];
	for(ll i=0; i<n; i++) cin>>hist[i];
	solve(hist,n);

	return 0;
}

/*
input
5
1 2 3 4 5

output
9

*/

//TCS CodeVita Question
/*
input
7
1 1
6 7 3 4 5 1 3

output
14

Explanation
Total volume of shaded region is 15.
Total volume of histogram is 29.
Largest Cuboid obtained is 14. 
Basically 29 - 15 = 14.
14 * 1(height) = 14.

input
7
1 2
1 2 6 4 5 3 4

output
20

*/