#include <iostream>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int k=2, row=0, flag=0;
		//count row for val n
		for(int i=0; i<8; i++) {
			if(flag==0) {
				if(n>=k && n<=k+6) {
					row = i;
					break;
				}
				flag = 1;
				k+=7;
			} else {
				if(n>=k && n<=k+7) {
					row = i;
					break;
				}
				k+=8;
			}
		}
		
		//fill brd with XXXX
		char brd[8][8];
		for(int i=0; i<8; i++) {
			for(int j=0; j<8; j++) {
				brd[i][j] = 'X';
			}
		}
		
		//fill brd with .....
		for(int i=0; i<row; i++) {
			for(int j=0; j<8; j++) {
				brd[i][j] = '.';
			}
		}
		
		//chk
		if(row%2==0) {
			for(int i=0; i<(n-8*row); i++) {
				brd[row][i] = '.';
			}
		} else {
			for(int i=7; i>7-(n-8*row); i--) {
				brd[row][i] = '.';
			}
		}

		//output
		brd[0][0]='O';
		for(int i=0; i<8; i++) {
			for(int j=0; j<8; j++) {
				cout<<brd[i][j];
			}cout<<"\n";
		}cout<<"\n";
	}

	return 0;
}

/*
input
4
1
5
9
64

output

........
........
........
.XXX....
.XOX....
.XXX....
........
........

........
........
........
........
........
XXX.....
..XX....
O..X....

........
.XXXXXXX
.X.O...X
.X...XXX
.XXX.X..
...XXX..
........
........

........
........
........
...O....
........
........
........
........

*/