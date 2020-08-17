#include <iostream>
#include <stack>
using namespace std;

#define ll long long
#define MOD 1000000007

void solve(ll *hist, ll n, ll sum, ll breadth, ll height) {
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

	ll res = (sum - maxArea) % MOD;
	ll out = (res * height * breadth) % MOD;
	cout << out;
}

int main() {

	ll n, sum = 0; 
	cin >> n;
	ll hist[n];
	ll breadth, height;
	cin >> breadth >> height;
	for(ll i = 0; i < n; i++) {
		cin >> hist[i];
		sum += hist[i];
	}
	 
	solve(hist, n, sum, breadth, height);

	return 0;
}

