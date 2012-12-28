#include<stdio.h>
#include<cmath>
#include<iostream>
using namespace std;

//#define m 1000000009;
inline int gcd(long long int a,long long b){if(b==0)return a;else return gcd(b,a%b);}
long long int m=1000000000;
long long int a,b;
long long int power(long long int a,long long int b){
    if (b==1) return a;
    if(b==0) return 1;
    long long int temp=power(a,b/2);
    if(b&1)
    return (((temp*temp)%m)*a)%m;
    return (temp*temp)%m;
}
long long int func(long long int n){
     if(n==1||n==0||n==2)return 1;
     if(n<5)return 3;
     if(n<7)return 15;
     if(n<=10)return 105;
     //long long int q,w,e;
     //q=power(2,(long long int)ceil(n/4));
     //double r=n/5.0;
     //double t=n/10.0;
     //long long int z,x;
     //if(r>n/5)z=(long long int)r+1;
     //if(t>n/10)x=(long long int)t+1;
     //w=func(n/5);
     //e=func((long long int)ceil(n/10));
     //printf("%lld\t%f\t%lld\n",z,r,x);
     //return (((power(2,(long long int)ceil(n/4))*func((long long int)ceil(n/5)))%m)*func((long long int)ceil(n/10)))%m;
     else return(((((((power(2,(int)ceil(n/4))))*func((int)ceil(n/5))))*func((int)ceil(n/10)))));
     
}
long long int val;
int main(){
    int t;
    long long int n=0;
    scanf("%d",&t);
    for(;t>0;t--){
                  scanf("%lld",&n);
                  if(n>20){printf("%d\n",0);continue;}
                  val=func(n);
                  //printf("%lld\n",val); 
                  //a=5*val;
                  //b=a-val;
                  //printf("%lld %lld",a,b);
                  long long int tempi=0;
                  long long int max=0;
                  for(a=val;a<=5*val;a++){
                                         for(b=val;b<=5*val;b++){
                                                                 if(gcd(a,b)==val){
                                                                                   tempi=power(a,b);        
                                                                                   if(tempi>max)max=tempi;          
                                                                 }                        
                                         }                       
                  }
                  //else max=power(b,a);
                  //max=power(a,b);
                  printf("%lld\n",max);
                 
    }
    return 0;    
}
