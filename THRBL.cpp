#include <iostream>
#include<stdio.h>
#include <cmath>
using namespace std;
const int  SIZE = 50001;
const int LOGSIZE = 20;
int n[SIZE]; 
int M[SIZE][LOGSIZE];
 
int main() {
    int N,ans;
    int  Q;
    scanf("%d",&N);
scanf("%d",&Q);
    for (int i = 0; i < N; i++)
        scanf("%d",&n[i]);
 
    for (int i = 0; i < N; i++)
         M[i][0] = n[i];
 
    for (int i = 1;(1 << i) <= N; i++) {
        for (int j = 0; j + (1 << i) - 1 < N; j++) {
            M[j][i] = max(M[j][i - 1], M[j + (1 << (i - 1))][i - 1]);
        }
    }
int count=0;
    for (int k = 0;k < Q; k++) {
        int i, j, t, p;
        scanf("%d%d",&i,&j);
          i--;j-=2;
        t = (int)(log(j - i + 1) / log(2)); 
        p = 1 << t;
        ans= max(M[i][t], M[j - p + 1][t]) ;
        
        if(ans>n[i])
{}
        else count++;
    }
    printf("%d\n",count);
    return 0;
}
