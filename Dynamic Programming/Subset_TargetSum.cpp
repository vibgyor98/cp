#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int dp[1001][1001];

int subsetSum(int *a, int N, int sum) {
	//sum becomes 0 (subset found)
	if(sum == 0) return 1;
	
	//no items left or sum becomes negative
	if(N < 0 || sum < 0) return 0;
	
	//check
	if(dp[N][sum] != -1) return dp[N][sum];
	
	//recursion
	else {
		int include = subsetSum(a, N - 1, sum - a[N]);
		int exclude = subsetSum(a, N - 1, sum);
		dp[N][sum] =  include || exclude;
	}

	return dp[N][sum];

}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int N, sum;
	cin >> N >> sum;
	int a[N];
	for(int i = 0; i < N; i++) cin >> a[i];
	memset(dp, -1, sizeof(dp));

	if(subsetSum(a,N-1,sum)) cout <<"Yes";
	else cout << "No";

	return 0;
}

/*
1<= n <= 1000
1<= sum <= 10^5
1<= Ai <=10^4

5 10
1 2 3 4 5

Yes
*/