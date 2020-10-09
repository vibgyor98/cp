#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int dp[101][101];

//0-1 Knapsack
int knapsack(int* size, int* val, int capacity, int N) {
	if(N == 0 || capacity == 0) return 0;
	if(size[N - 1] <= capacity) {
		return dp[N][capacity] = max((val[N - 1] + knapsack(size,val,capacity-size[N-1],N-1)), 
			knapsack(size,val,capacity,N-1));
	} else if(size[N - 1] > capacity) {
		return dp[N][capacity] = knapsack(size,val,capacity,N-1);
	} else {
		return 0;
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int N, capacity;
	cin >> N >> capacity;
	int wt[N], val[N];
	memset(dp, -1, sizeof(dp));
	for(int i = 0; i < N; i++) cin >> wt[i];
	for(int i = 0; i < N; i++) cin >> val[i];

	int ans = knapsack(wt,val,capacity,N);
	cout << ans;

	return 0;
}

/*
1 <= S,N <= 1000

5 4
1 2 3 2 2 
8 4 0 5 3

13

Total capacity = 4.
Pick size 1 with value 8 and size 2 with value 5.
*/