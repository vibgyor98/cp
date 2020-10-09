#include <iostream>
#include <cstring>

using namespace std;

int abs(int i, int j) {
	if(i - j > 0) return i - j;
	else return j - i;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a[1000000] = {0};
	int t; cin >> t;

	while(t--) {
		memset(a,0,sizeof(a));
		string name;
		int n, rank;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> name >> rank;
			a[rank]++;
		}

		//Greedy App
		int actual_rank = 1;
		int sum = 0;
		for(int i = 1; i <= n; i++) {
			while(a[i]) {
				sum += abs(actual_rank, i);
				a[i]--;
				actual_rank++;
			}
		}

		cout << sum <<"\n";
	}

	return 0;
}

/*
Input:
2

7
noobz 1
llamas 2
Winn3rz 2
5thwheel 1
NotoricCoders 5
StrangeCase 7
WhoKnows 7

3
ThreeHeadedMonkey 1
MoscowSUx13 1
NeedForSuccess 1

Output:
5
3
*/