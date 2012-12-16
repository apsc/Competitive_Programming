#include<stdio.h>
#include<queue>
#include<cstring>
using namespace std;
int main()
{
int test,m,n,a,b,t,i,j,x,y,newx,newy;
int turnx[]={0,1,-1,0};
int turny[]={1,0,0,-1};
int c[150][150];
queue <int> qx;
queue <int> qy;
scanf("%d",&test);
while(test--)
{
    int visit[150][150];
    scanf("%d%d",&m,&n);
    if(m==0)
        break;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&c[i][j]);
    scanf("%d%d%d",&a,&b,&t);
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            visit[i][j]=10000;
    visit[1][1]=c[1][1];
    qx.push(1);
    qy.push(1);
    while(!qx.empty())
    {
        x = qx.front();
        qx.pop();
        y = qy.front();
        qy.pop();
        for(i=0;i<4;i++)
        {
            newx = x + turnx[i];
            newy = y + turny[i];
            if(newx>0 && newx<=m && newy>0 && newy<=n)
            {
                if(visit[newx][newy]<=(visit[x][y]+c[newx][newy]))
                    continue;
                else visit[newx][newy]=visit[x][y]+c[newx][newy];
                qx.push(newx);
                qy.push(newy);
            }
        }
    }
    /*for(i=1;i<=m;i++)
        {for(j=1;j<=n;j++)
            printf("%d ",visit[i][j]);
        printf("\n");}*/
    if(visit[a][b]<=t)
        printf("YES\n%d\n",t-visit[a][b]);
    else
        printf("NO\n");
    }
    return 0;
}
