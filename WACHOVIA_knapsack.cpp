#include<stdio.h>
int main()
{
    int c[60][1010],w[1010],v[60],i,j,k,m,t;
    scanf("%d",&t);
while(t--)
{
    scanf("%d%d",&k,&m);
    for(i=0;i<=k;i++)
    c[0][i]=0;
    for(i=1;i<=m;i++)
    scanf("%d%d",&w[i],&v[i]);
    for(i=1;i<=m;i++)
    {
                     c[i][0]=0;
                     for(j=1;j<=k;j++)
                     {
                                      if(w[i]<=j)
                                      {
                                                 if((v[i]+c[i-1][j-w[i]])>c[i-1][j])
                                                 c[i][j]=v[i]+c[i-1][j-w[i]];
                                                 else
                                                 c[i][j]=c[i-1][j];
                                                 }
                                      else
                                      c[i][j]=c[i-1][j];
                                      }
                                      }
    printf("Hey stupid robber, you can get %d.\n",c[m][k]);
}
return 0;
}
