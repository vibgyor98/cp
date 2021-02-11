#include <bits/stdc++.h>
using namespace std;

#define ll		long long int
#define ld		long double
#define mod     1000000007
#define inf     1e18

int calH(string meetTime, int t) {
	int MH;
	MH = 10 * (meetTime[0 + t] - '0') + 1 * (meetTime[1 + t] - '0');
	if (meetTime[6 + t] == 'P') {
		if (MH != 12) MH += 12;
	}
	if (meetTime[6 + t] == 'A') {
		if (MH == 12) MH -= 12;
	}
	return MH;
}

int calM(string meetTime, int t) {
	int MM;
	MM = 10 * (meetTime[3 + t] - '0') + (meetTime[4 + t] - '0');
	return MM;
}

int main() {
	clock_t begin = clock();
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Start code here....
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string meetTime;
		getline(cin, meetTime);
		int MH = calH(meetTime, 0);
		int MM = calM(meetTime, 0);
		int n;
		cin >> n;
		cin.ignore();
		string res = "";
		while (n--) {
			string friendTime;
			getline(cin, friendTime);
			int friendStartHour = calH(friendTime, 0);
			int friendStartMinute = calM(friendTime, 0);
			int friendEndHour = calH(friendTime, 9);
			int friendEndMinute = calM(friendTime, 9);

			if ((friendStartHour > MH) || (friendEndHour < MH)) {
				res = res + '0';
			} else if (friendStartHour == MH && friendStartMinute > MM) {
				res = res + '0';
			} else if (friendEndHour == MH && friendEndMinute < MM) {
				res = res + '0';
			} else {
				res = res + '1';
			}
		}
		cout << res << "\n";
	}

#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}

/*

2
12:01 AM
4
12:00 AM 11:42 PM
12:01 AM 11:59 AM
12:30 AM 12:00 PM
11:59 AM 11:59 PM
04:12 PM
5
12:00 AM 11:59 PM
01:00 PM 04:12 PM
04:12 PM 04:12 PM
04:12 AM 04:12 AM
12:00 PM 11:59 PM

1100
11101

*/