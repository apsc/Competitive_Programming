#include<stdio.h>
int s[10000][505];
int main()
{
int t,r,c,i,j;
scanf("%d",&t);
while(t--)
{
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        s[i][0]=0;
    }
    for(j=0;j<c;j++)
    {
        s[0][j]=0;
    }
    for(i=1;i<=r;i++)
        for(j=1;j<=c;j++)
            scanf("%d",&s[i][j]);
    s[r][c]=1;
    for(i=r-1;i>0;i--)
    {
            s[i][c]=s[i+1][c]-s[i][c];
        if(s[i][c]<1)
            s[i][c]=1;
    }
    for(j=c-1;j>0;j--)
    {
            s[r][j]=s[r][j+1]-s[r][j];
        if(s[r][j]<1)
            s[r][j]=1;
    }
    for(i=r-1;i>0;i--)
        for(j=c-1;j>0;j--)
        {
            if(s[i+1][j]<s[i][j+1])
                s[i][j]=s[i+1][j]-s[i][j];
            else
                s[i][j]=s[i][j+1]-s[i][j];
            if(s[i][j]<1)
                s[i][j]=1;
        }

    /*for(i=0;i<=r;i++)
        {for(j=0;j<=c;j++)
            printf("%d ",s[i][j]);
         printf("\n");
        }*/
    printf("%d\n",s[1][1]);
}
return 0;
}
