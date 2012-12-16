#include<stdio.h>
long long int sum=0;
long long int n=0;
long long int arr[10000007]={0};
long long int aman(long long int a)
{
     if(a>10000007){return aman(a/2)+aman(a/3)+aman(a/4);}
    if(arr[a]!=0)return arr[a];
	 sum=a;
     if(a>11)
     {
   	      sum=aman(a/2)+aman(a/3)+aman(a/4);
   	      arr[a]=sum;
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
