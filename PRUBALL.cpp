#include<stdio.h>
#include<math.h>
long long comb(long long n, long long b);
int main()
{
long long i,b,m;
int t,l;
scanf("%d",&t);
while(t--)
{
    scanf("%d%lld%lld",&l,&b,&m);
    if(b>=10 && m<=1000)
    {
             double ans=log(m)/log(2);
             long long ans1=(long long)ans;
             if((ans*1000000)>(ans1*1000000))
             ans1=ans1+1;
             printf("%d %lld\n",l,ans1);
             continue;
             }
    for(i=b;i<=m;i++)
    {
                     long long sum=comb(i,b);
                     if(sum>=m)
                     {printf("%d %lld\n",l,i);break;}
    }
}
return 0;
}
 
 long long comb(long long n, long long b)
 {
         long long a[100],i,sum=0,k=0,j;
         a[0]=1;
    for(j=1;j<=b;j++)
    {
                         k++;
                         a[j]=(a[j-1]*n)/k;
                         n--;
                         sum+=a[j];
    }
    return sum;
 }
