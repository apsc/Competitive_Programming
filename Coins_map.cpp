#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
long long int sum=0;
long long int n=0;
static map<long long int, long long int> m;
long long int aman(long long int a)
{
     //if(a>10000007){return aman(a/2)+aman(a/3)+aman(a/4);}
    if(m[a]!=0)return m[a];
	 sum=a;
     if(a>11)
     {
   	      sum=aman(a/2)+aman(a/3)+aman(a/4);
   	      m[a]=sum;
          return sum;
     }      
   		 else return sum;    
}
int main()
{

	while(scanf("%lld",&n)!=EOF){
         printf("%lld\n",aman(n));
     }
    return 0;
}
