#include<stdio.h>
long long modexp(long long a, long long b, long long n);

int main()
{
    long long n,t;
    scanf("%lld",&t);
while(t--)
{
    scanf("%lld",&n);
    if(n<=6) printf("0\n");
    else
    {
        long long n1=n-6;
        if(n1==1 || n1==2) 
        {
                 printf("1\n");
                 continue;
                 }
        n1=n-8;
        long long mod=86399;
        long long ans=modexp(2,n1,mod);
        printf("%lld\n",ans);
        }
    }
    return 0;
}
        
long long modexp(long long a, long long b, long long n)
{
            long long d=1;
            while(b!=0)
            {
                       if(b&1)
                         d=(d*a)%n;
                             a=(a*a)%n;
                       b=b>>1;
                       }
            return (d);
}
