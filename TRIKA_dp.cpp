#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int m,n,a[30][30]={0},x,y;
    scanf("%d%d",&m,&n);
    scanf("%d%d",&x,&y);
    for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                    scanf("%d",&a[i][j]);        
            }        
    }
    int t=a[x][y];
    a[x][y]=0;
    for(int i=x;i<=x;i++){
            for(int j=y+1;j<=n;j++){
                    a[i][j]+=a[i][j-1];
            }
    }
    for(int i=y;i<=y;i++){
            for(int j=x+1;j<=m;j++){
                    a[i][j]+=a[i-1][j];
            }
    }
    for(int i=x+1;i<=m;i++){
            for(int j=y+1;j<=n;j++){
                    a[i][j]+=min(a[i-1][j],a[i][j-1]);
            }
    }
    if(t-a[m][n]<0)printf("N\n");
    else printf("Y %d\n",t-a[m][n]);
    return 0;
}
