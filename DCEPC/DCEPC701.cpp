#include<stdio.h>
#include<limits.h>
#include<queue>
using namespace std;
int checkvalid(int x, int y);
int turnx[4]={1,-1,0,0};
int turny[4]={0,0,1,-1};
struct pq
{
       int c;
       int x;
       int y;
       bool operator<(const pq &b)const
       {
            return (c>b.c);
            }
       };
int a[210][210];
int flag[210][210];
long long vis[210][210];
int n,m;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              pq cur,add;
              int i,j;
              char s[1000];
              scanf("%d%d",&n,&m);
              for(i=0;i<n;i++)
              scanf("%s",&s);
              for(i=0;i<n;i++)
              {
                              for(j=0;j<m;j++)
                              {
                                              scanf("%d",&a[i][j]);
                                              flag[i][j]=0;
                                              vis[i][j]=123456789;
                                              }
                                              }
              int x1,x2,y1,y2;
              scanf("%d%d",&x1,&y1);
              scanf("%d%d",&x2,&y2);
              vis[x1][y1]=0;
              cur.c=vis[x1][y1];
              cur.x=x1;
              cur.y=y1;
              priority_queue <pq> Q;
              Q.push(cur);
              while(!Q.empty() || flag[x2][y2]!=1)
              {
                               cur=Q.top();
                               int tmpx=cur.x;
                               int tmpy=cur.y;
                               if(flag[tmpx][tmpy]==1)
                               {
                                                      Q.pop();
                                                      continue;
                                                      }
                               for(i=0;i<4;i++)
                               {
                                               int tmpx1=tmpx+turnx[i];
                                               int tmpy1=tmpy+turny[i];
                                               if(checkvalid(tmpx1,tmpy1))
                                               {
                                                                          long long temp;
                                                                          if(a[tmpx1][tmpy1]-vis[tmpx][tmpy]<=1)
                                                                          temp=1;
                                                                          else
                                                                          temp=a[tmpx1][tmpy1]-vis[tmpx][tmpy];
                                                                          if(vis[tmpx1][tmpy1]>temp+vis[tmpx][tmpy])
                                                                          {
                                                                          vis[tmpx1][tmpy1]=temp+vis[tmpx][tmpy];
                                                                          add.c=vis[tmpx1][tmpy1];
                                                                          add.x=tmpx1;
                                                                          add.y=tmpy1;
                                                                          Q.push(add);
                                                                          }
                                                                          }
                                                                          }
                                               flag[tmpx][tmpy]=1;
                                               }
             /* for(i=0;i<n;i++)
              {
                              for(j=0;j<m;j++)
                              printf("%d ",vis[i][j]);
                              printf("\n");
                              }*/
              printf("%lld\n",vis[x2][y2]);
              }
              
    }
int checkvalid(int x, int y)
{
    if(x>=0 && x<n && y>=0 && y<m)
    return 1;
    else
    return 0;
}
