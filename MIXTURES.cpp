#include<stdio.h>
int main(){
    long long n,a[111][111]={0},m[111][111]={0};
    
    while(scanf("%lld",&n)!=EOF){
           
           for(long long i=0;i<n;i++)scanf("%lld",&a[i][i]);
           n--;
           for (long long i = 0; i <= n; i++) 
               m[i][i] = 0;
           for(long long l=2;l<=n+1;l++)
           for(long long i=0;i<=n-l+1;i++){
                   long long j=i+l-1;
                   m[i][j]=9999999;
                   for(long long k=i;k<j;k++){
                           long long q=m[i][k]+m[k+1][j]+a[i][k]*a[k+1][j];                           
                           if(q<m[i][j]){m[i][j]=q;a[i][j]=(a[i][k]+a[k+1][j])%100;}
                   }
           }
           printf("%d\n",m[0][n]);
           
    }
}
