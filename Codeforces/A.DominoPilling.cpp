#include <iostream>
#include <unordered_map>
#include <cstring>
#include <list>
using namespace std;

#define ll long long
#define MOD 1000000007

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	int mat[N][M];
	int ans = 0;
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			if(mat[i])
		}
	}

	return 0;
}

/*
1. Each domino completely covers two squares.

2. No two dominoes overlap.

3. Each domino lies entirely inside the board. 
It is allowed to touch the edges of the board.

Find the maximum number of dominoes, 
which can be placed under these restrictions.

Input
In a single line you are given two integers M and N — 
board sizes in squares (1 ≤ M ≤ N ≤ 16).

Output
Output one number — the maximal number of dominoes, which can be placed.

Examples
input
2 4
output
4
input
3 3
output
4

*/