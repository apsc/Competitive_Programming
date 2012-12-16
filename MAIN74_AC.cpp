#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
        typedef unsigned long long ll;
        ll  MOD=ll( 1000000007);
        ll Fibo(ll n)
            {
                ll  fib[2][2]={{1,1},{1,0}},ret[2][2]={{1,0},{0,1}},tmp[2][2]={{0,0},{0,0}};
                while(n)
                {
                    if(n&1)
                    {
                 memset(tmp,0,sizeof tmp);
                        for(ll i=0;i<2;i++) for(ll j=0;j<2;j++) for(ll k=0;k<2;k++)
                                tmp[i][j]=(tmp[i][j]+ret[i][k]*fib[k][j])%MOD;
                        for(ll i=0;i<2;i++) for(ll j=0;j<2;j++) ret[i][j]=tmp[i][j];
                    }
                    memset(tmp,0,sizeof tmp);               
                    for(ll i=0;i<2;i++) for(ll j=0;j<2;j++) for(ll k=0;k<2;k++)
                                           tmp[i][j]=(tmp[i][j]+fib[i][k]*fib[k][j])%MOD;
                                for(ll i=0;i<2;i++) for(ll j=0;j<2;j++) fib[i][j]=tmp[i][j];
                    n/=2;
         
                }
                return (ret[0][1]);
            }
         
            int main()
            {
                ll t,m;
                for(scanf("%lld",&t);t>0;t--)
                {
                    scanf("%lld",&m);
                    if(m==0)printf("0\n");
                    else if(m==1)printf("2\n");
                    else printf("%lld\n",Fibo(m+3));
                }
return 0;
            }
