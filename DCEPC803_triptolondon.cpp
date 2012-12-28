#include<stdio.h>
int min(int a, int b);
int main()
{
    int i,j,temp[25][25],dir[25][25],shrt[25][25],x,y,k,n,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {
                     scanf("%d",&dir[i][j]);
                     if(dir[i][j]==-1)
                     {x=i;y=j;}
                     }
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    scanf("%d",&shrt[i][j]);
    int count=0;
    int flag=0;
    for(d=shrt[x][y];d<=100;d++)
    {
                                for(i=1;i<=n;i++)
                                for(j=1;j<=n;j++)
                                temp[i][j]=dir[i][j];
                                temp[x][y]=d;
                                for(k=1;k<=n;k++)
                                for(i=1;i<=n;i++)
                                for(j=1;j<=n;j++)
                                temp[i][j]=min(temp[i][j],temp[i][k]+temp[k][j]);
                                flag=0;
                                for(i=1;i<=n;i++)
                                for(j=1;j<=n;j++)
                                {
                                                 if(temp[i][j]!=shrt[i][j])
                                                 flag=1;
                                                 }
                                if(flag==0)
                                count++;
                                }
    printf("%d\n",count);
return 0;
}
int min(int a, int b)
{
    if(a<b)
    return a;
    else return b;
}
