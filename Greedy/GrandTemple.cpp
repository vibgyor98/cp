#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;
	vector<int> x;
	vector<int> y;
	int xc, yc;
	for(int i = 0; i < n; i++) {
		cin >> xc >> yc;
		x.push_back(xc);
		y.push_back(yc);
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	int dx = 0, dy = 0;
	for(int i = 0; i < n - 1; i++) {
		dx = max(dx, x[i+1] - x[i]);
		dy = max(dy, y[i+1] - y[i]);
	}
	cout << (dx - 1) * (dy - 1);
	return 0;
}

/*
Constraints
1 <= N <= 10^5
| Ai | <= 10^9

Sample Input
3
1 1
2 4
5 2
Sample Output
2

Explanation
Area between (2,2), (2,4), (5,2), (5,4)
(For the largest possible region found the area will be calculated 
from the edge next to the left edge, the edge above the bottom edge, 
the topmost edge and the rightmost edge 
i.e for the region (2,2) , (2,4) , (5,2) , (5,4) 
the actual area will be considered from (3,2), (3,4), (5,2), (5,4) respectively.
Try to draw the diagram and you will realize the modified picture of the area)
*/