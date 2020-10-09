#include <iostream>
using namespace std;

 int dp[101][101];

int knapsack(int* wt, int* val, int N, int w) {
    for(int i = 0; i <= N + 1; i++) {
        for(int j = 0; j <= w + 1; j++) {
            if(i == 0 || j == 0) dp[i][j] = 0;
        }
    }

    for(int i = 1; i < N + 1; i++) {
        for(int j = 1; j < w + 1; j++) {
            if(wt[i - 1] <= j) {
                dp[i][j] =  max(val[i - 1] + dp[i][j - wt[i - 1]], 
                	dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[N][w];
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    int N, capacity;
    cin >> N >> capacity;
    int wt[N], val[N];
    for(int i = 0; i < N; i++) cin >> wt[i];
    for(int i = 0; i < N; i++) cin >> val[i];

    int ans = knapsack(wt,val,N,capacity);
    cout << ans;

    return 0;
}


/*
1 <= S,N <= 1000

5 11
3 2 4 5 1
4 3 5 6 1

16

We take second item 4 times 
and fifth item one time to make the total values 16.
*/