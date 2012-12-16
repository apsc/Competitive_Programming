#include<stdio.h>
static long long int sum=0;
static long long int n=0;
static long longint arr[1000006]={0};
long long int aman(long long int a)
{
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
         printf("%d\n",aman(n));
     }
    return 0;
}
