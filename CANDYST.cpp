#include<stdio.h>
int main()
{
int t,n,m,i,x,y,z,c;
int a[100500];
scanf("%d",&t);
while(t--)
{
    scanf("%d%d",&n,&m);
    x=1;c=0;z=0;
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    for(i=m-2;i>=0;i--)
    {
        if(a[i+1]>a[i])
        {
            x=x-(a[i+1]-a[i]);
            z=z+(a[i+1]-a[i]);
        }
        else
        {
            x=x+(a[i]-a[i+1]);
            z=z-(a[i]-a[i+1]);
        }
        if(a[i+1]==a[i])
        {
            x++;
        }
        if(x>n)
            break;
        if(z>=n)
            break;
        if(z<0)z=0;
        if(x<1)x=1;
    }
    if(i<0)
        printf("%d\n",x);
    else
        printf("-1\n");
}
return 0;
}
