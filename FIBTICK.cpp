#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
        typedef unsigned long long ll;
        ll MOD;
        ll Fibo(ll n)
            {
                ll  fib[4][4]={{1,1,1,1},{1,0,0,0},{0,0,1,1},{0,0,0,1}},ret[4][4]={{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}},tmp[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
                while(n)
                {
                    if(n&1)
                    {
                 memset(tmp,0,sizeof tmp);
                        for(ll i=0;i<4;i++) for(ll j=0;j<4;j++) for(ll k=0;k<4;k++)
                                tmp[i][j]=(tmp[i][j]+ret[i][k]*fib[k][j])%MOD;
                        for(ll i=0;i<4;i++) for(ll j=0;j<4;j++) ret[i][j]=tmp[i][j];
                    }
                    memset(tmp,0,sizeof tmp);               
                    for(ll i=0;i<4;i++) for(ll j=0;j<4;j++) for(ll k=0;k<4;k++)
                                           tmp[i][j]=(tmp[i][j]+fib[i][k]*fib[k][j])%MOD;
                                for(ll i=0;i<4;i++) for(ll j=0;j<4;j++) fib[i][j]=tmp[i][j];
                    n/=2;
         
                }
                return (ret[0][0]+ret[0][3])%MOD;
            }
         
            int main()
            {
                ll t,n;
                for(scanf("%lld",&t);t>0;t--)
                {
                    scanf("%lld%lld",&n,&MOD);
                    if(n==0)printf("0\n");
                    else printf("%lld\n",Fibo(n-1));
                }
return 0;
            }
