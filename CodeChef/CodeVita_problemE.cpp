#include <iostream>
#include <stack>
using namespace std;

#define ll long long
#define MOD 1000000007

class Herv {
	int costBuilding;
	int maxArea;
	Herv(int costBuilding, int maxArea) {
		int cstBuildHerv = costBuilding;
		int maxAreaHerv = maxArea;
	}
}obj1;

void possible(ll mxArHerv, ll mxArCarv, ll mxArAqua, ll minimumCst, ll total_Zoo_Ar) {
	if(mxArHerv * minimumCst)
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll cstHerv, cstCarv, cstAqua;
	cin >> cstHerv >> cstCarv >> cstAqua;
	ll minimumCst;
	if(cstHerv < cstCarv && cstHerv < cstAqua) minimumCst = cstHerv;
	else if(cstCarv < cstHerv && cstCarv < cstAqua) minimumCst = cstCarv;
	else minimumCst = cstAqua;

	ll mxArHerv, mxArCarv, mxArAqua;
	cin >> mxArHerv >> mxArCarv >> mxArAqua;


	ll minNoHerv, minArHerv;
	cin >> minNoHerv >> minArHerv;

	ll minNoCarv, minArCarv;
	cin >> minNoCarv >> minArCarv;

	ll minNoAqua, minArAqua;
	cin >> minNoAqua >> minArAqua;

	ll total_Zoo_Ar;
	cin >> total_Zoo_Ar;
	possible(mxArHerv, mxArCarv, mxArAqua, minimumCst, total_Zoo_Ar);

	return 0;
}

/*

input

10000 1000 1500
250 250 300
5 5
15 5
10 10
500

output

837500

*/

