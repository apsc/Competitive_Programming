#include<stdio.h>
#include<conio.h>
#include<string.h>
long long max(long long a, long long b)
{
    if(a>=b)
    return a;
    else return b;
}
long long f(int i,int n);
long long a[100002];
long long tb[100002]; 
int main()
{
        int t,n,i;
        scanf("%d",&t);
        while(t--)
        {
                scanf("%d",&n);
                
                for(i=0;i<n;i++)
                scanf("%d",&a[i]);                 
                memset(tb,-1,sizeof tb);
                printf("%lld\n",f(0,n-1));
        }
getch();
}
long long f(int i,int n)
{
        if(tb[i]>=0)
        return tb[i];
        else
        {
                if(n-i<=2)
                {
                        int tmp=0,y;
                        for(y=i;y<=n;y++)                        
                        tmp+=a[y];                        
                        tb[i]=tmp;
                        return tb[i];
                }
                else
                {
                        long long x,y,z;                        
                        x=a[i]+f(i+2,n);
                        y=i+4<=n ? a[i]+a[i+1]+f(i+4,n) : a[i]+a[i+1] ;
                        z=i+6<=n ? a[i]+a[i+1]+a[i+2]+f(i+6,n) : a[i]+a[i+1]+a[i+2];
                        tb[i]=max(x,max(y,z));
                        return tb[i];
                }
 } 
}
 
