#include<stdio.h>
#include<conio.h>
long long a[1000];
long long min(long long a, long long b)
{
     if(a<b)
     return a;
     else return b;
     }
int main()
{
                    int i,t;
                    scanf("%d",&t);
while(t--)
{
    long long n,n1,level,k;
    scanf("%lld%lld",&level,&n);
/*    k=1;
    level--;
    if(level<=51)
    {
                 for(i=1;i<=level;i++)
                 k*=2;
                 printf("%lld\n",k);
                 k=min(k,n);
                 }
    else
    k=n;
    n=k;*/
    if(n==1)
    {
            printf("Male\n");continue;}
    if(n==2)
    {
            printf("Female\n");continue;}
    n1=n;
    int cnt=0;
    while(n1!=2)
    {
                if(n1&1)
                {
                        n1=(n1+1)/2;
                        a[cnt++]=n1;
                }
                else
                {
                    n1=n1/2;
                    a[cnt++]=n1;
                    }
                    }
//    for(i=0;i<cnt;i++)
  //  printf("%lld ",a[i]);
    int flag=0;
    for(i=0;i<cnt;i++)
    {
                      if(a[i]%2==0)
                      flag^=1;
                      }
    if(n&1)
    {}
    else
    flag^=1;
    //printf("%d\n",flag);
    if(flag==0)
    printf("Male\n");
    else
    printf("Female\n");
}
    getch();
}
