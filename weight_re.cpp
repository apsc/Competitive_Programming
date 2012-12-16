#include<stdio.h>
long long int a[1000010],w[1000010];
int main()
{
    int t;
    long long int n,sum,ans,i,j,k,l;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;ans=0;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
            w[i]=i;
        }
        k=n+1;
        for(i=n;i>=1;i--)
        {
            sum+=a[i];
            if(sum<0)
            {
                /*for(j=i,l=2;j<k;j++,l++)
                {                   
                    w[j]=l;                    
                }*/
                w[i]=2;
                sum=0;
                k=i;
            }
        }
        int cntr=1;
        for(i=1;i<=n;i++){
            if(w[i]==2)cntr=2;
            w[i]=cntr++;
            ans=ans+(a[i]*w[i]);
            
        }
        printf("%lld\n",ans);
    }
    return 0;
}
