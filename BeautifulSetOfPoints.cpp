#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int m,n,a[100][100];
    scanf("%d%d",&m,&n);
    int cntr=m*n;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
            a[cntr][0]=i;
            a[cntr][1]=j;            
    }
    int t=cntr;
    
    for(int k=0;k<t;k++){
            for(int j=k+1;j<t;j++){
                    int d2=(a[k][0]-a[j][0])*(a[k][0]-a[j][0])+(a[k][1]-a[j][1])*(a[k][1]-a[j][1]);
                    int res=(int)sqrt(d2);
                    if(res*res!=d2){cntr--;}
            }
    }
    printf("%d",cntr);
    main();
    return 0;
}
