#include<stdio.h>
#include<string.h>
int main()
{
long long int i,l,n,cnt,ans;
char c[5005];
long long int f[5005];
f[0]=1;f[1]=1;
for(i=2;i<1000;i++)
    f[i]=f[i-1]+f[i-2];
scanf("%s",c);
while(c[0]!='0')
{
    l=strlen(c);
    cnt=1;ans=1;
    for(i=1;i<l;i++)
    {
        n=10*(c[i-1]-'0')+(c[i]-'0');
        if(n==10||n==20)
        {
            ans=ans*f[cnt-1];
                cnt=1;
        }
        else if(n>26||n<10)
        {
                ans=ans*f[cnt];
                cnt=1;
        }
        else
            cnt++;
    }
    ans=ans*f[cnt];
    printf("%lld\n",ans);
    scanf("%s",c);
}
return 0;
}
