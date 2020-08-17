#include <iostream>
using namespace std;

int main() {

    int r,c;
    cin >> r >> c;
    int mat[r][c];
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin >> mat[i][j];
        }
    }

    //if row is 4
    int sum4 = 0, cnt4 = 0;
    if(r == 4) {
        int div4 = row / 2;
        for(int i=0; i<4; i++) {
            if(cnt4 > 0) start = 0;
            else start++;
            cnt4++;
            for(start; start < 2; start++) {
                for(int j=0; j<2; j++) {
                 sum4 += a[i][j];
                }
            }
        }
    }

    //if row is 6
    int sum6 = 0;
    if(r == 6) {
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                sum6 += a[i][j];
            }
        }
    }


    return 0;
}