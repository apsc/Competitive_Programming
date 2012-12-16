#include<cstdio>
#include<iostream>
#define m 10000007
using namespace std;
long long k;
long long pow(long long a,long long b){
     if (b==1) return a;
    if(b==0) return 1;
    long long temp=pow(a,b/2);
    if(b&1)
    return ((((temp*temp)%m)*a)%m);
    return ((temp*temp)%m);
}
long long compute(long long n){
     long long sn=0,pn=0;
     
     sn=pow(n,k);
     
     sn=((sn+((2*pow(n-1,k))%m))%m);
     
     pn=pow(n,n);
     pn=((pn+2*pow(n-1,n-1))%m);
     
     
     return ((sn+pn+m)%m);
}
int main(){
    long long t,n;
    scanf("%lld%lld",&n,&k);
    while(m!=0 && n!=0){
               t=compute(n);
               printf("%lld\n",t);
               scanf("%lld%lld",&n,&k);               
    }
    return 0;  
}
