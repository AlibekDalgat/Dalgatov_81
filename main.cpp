#include<iostream>
#define lvl 10
using namespace std;


#include<stdio.h>

int main()
{
    int A[lvl][lvl] = {
            {0,0,0,1,0,0,0,0},
            {0,0,1,0,0,0,0,0},
            {0,0,0,0,1,0,0,0},
            {0,1,1,0,1,0,1,0},
            {0,0,0,0,0,1,0,0},
            {0,0,0,0,0,0,0,0},
            {0,0,0,0,0,1,0,1},
            {0,0,0,0,0,1,0,0}
    },
            M[lvl][lvl];
    for (int i = 0; i < lvl; i++) {
        for (int j = 0; j < lvl; j++) {
            M[i][j] = A[i][j];
        }
    }
    for (int k = 0; k < lvl; ++k) {
        for (int i = 0; i < lvl; ++i) {
            for (int j = 0; j < lvl; ++j) {
                M[i][j] = M[i][j] | (M[i][k] & M[k][j]);
            }
        }
    }

    for (int i = 0; i < lvl; i++) {
        for (int j = 0; j < lvl; j++) {
            cout << " " << M[i][j];
        }
        cout << '\n';
    }
    // le
}
