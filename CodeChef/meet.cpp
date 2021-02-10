#include <bits/stdc++.h>
using namespace std;

#define ll		long long int
#define ld		long double
#define mod     1000000007
#define inf     1e18

int exactMeetTime(string meetTime) {
	int res;
	string ans;
	int h1 = (int)meetTime[1] - '0';
	int h2 = (int)meetTime[0] - '0';
	int hh = (h2 * 10 + h1 % 10);

	//if time is in AM
	if (meetTime[6] == 'A') {
		if (hh == 12) {
			for (int i = 0; i <= 4; i++) {
				if (meetTime[i] == ':') continue;
				else ans = ans + meetTime[i];
			}
			res = stoi(ans);
		} else {
			for (int i = 0; i <= 4; i++) {
				if (meetTime[i] == ':') continue;
				else ans = ans + meetTime[i];
			}
			res = stoi(ans);
		}
	} else { //if time is in PM
		if (hh == 12) {
			ans = "12";
			for (int i = 3; i <= 4; i++) {
				ans = ans + meetTime[i];
			}
			res = stoi(ans);
		} else {
			ans = to_string(hh) + "12";
			for (int i = 0; i <= 4; i++) {
				if (meetTime[i] == ':') continue;
				else ans = ans + meetTime[i];
			}
			res = stoi(ans);
		}
	}
}

int time24(string time, string period) {
	int res;
	string ans;
	//get hours
	int h1 = (int)time[1] - '0';
	int h2 = (int)time[0] - '0';
	int hh = (h2 * 10 + h1 % 10);

	//if time is in AM
	if (period[0] == 'A') {
		if (hh == 12) {
			ans = "00";
			for (int i = 0; i <= 4; i++) {
				if (time[i] == ':') continue;
				else ans = ans + time[i];
			}
			res = stoi(ans);
		} else {
			for (int i = 0; i <= 4; i++) {
				if (time[i] == ':') continue;
				else ans = ans + time[i];
			}
			res = stoi(ans);
		}
	} else { //if time is in PM
		if (hh == 12) {
			ans = "12";
			for (int i = 0; i <= 4; i++) {
				if (time[i] == ':') continue;
				else ans = ans + time[i];
			}
			res = stoi(ans);
		} else {
			ans = to_string(hh) + "12";
			for (int i = 0; i <= 4; i++) {
				if (time[i] == ':') continue;
				else ans = ans + time[i];
			}
			res = stoi(ans);
		}
	}
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
	while (t--) {
		string meetTime;
		getline(cin, meetTime);
		int cmp1 = exactMeetTime(meetTime);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		int n;
		cin >> n;
		while (n--) {
			string startTime;
			cin >> startTime;
			string startPeriod;
			cin >> startPeriod;
			int cmp2 = time24(startTime, startPeriod);

			string endTime;
			cin >> endTime;
			string endPeriod;
			cin >> endPeriod;
			int cmp3 = time24(endTime, endPeriod);

			string str;
			if (((cmp2 < cmp1) || (cmp2 == cmp1)) && ((cmp1 < cmp3) || (cmp1 == cmp3))) {
				str = str + '1';
			} else {
				str = str + '0';
			}
			cout << str << "\n";
		}
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