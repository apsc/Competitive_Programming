#include<stdio.h>
#include<iostream>
#include<queue>
#include<limits.h>
using namespace std;
struct pq
{
       int x,y,c;
       bool operator<(const pq &b)const
       {
            return c>b.c;
            }
            };
int a[1005][1005],vis[1005][1005]={0},m,n;
int flag[1005][1005]={0};
int turnx[4]={0,1,0,-1};
int turny[4]={-1,0,1,0};
int checkvalid(int x1, int y1,int x, int y);
int main()
{
    int c,b,t,i,j,minx,miny,s,tm,k;
    scanf("%d",&t);
    priority_queue<pq>Q;
while(t--)
{
          pq cur,add;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                  scanf("%d",&a[i][j]);
                                  flag[i][j]=0;
                                  vis[i][j]=INT_MAX;
                                  }
                                  }
    scanf("%d%d%d",&c,&b,&tm);
      vis[0][0]=a[0][0];
      cur.c=a[0][0];
      cur.x=0;
      cur.y=0;
      Q.push(cur);
    while(flag[c-1][b-1]!=1 || !Q.empty())
    {
                            cur=Q.top();
//                            Q.pop();
                              int x1=cur.x;
                              int y1=cur.y;
                        //      printf("%d\n",cur.c);
                            if(flag[x1][y1]==1)
                            {
                                               Q.pop();continue;}
                            for(i=0;i<4;i++)
                            {
                                            int x2=x1+turnx[i];
                                            int y2=y1+turny[i];
                                            if(checkvalid(x2,y2,x1,y1))
                                            {
                                                                     if(vis[x2][y2]>a[x2][y2]+vis[x1][y1])
                                                                     {vis[x2][y2]=a[x2][y2]+vis[x1][y1];                  
                                                                   add.c=vis[x2][y2];
                                                                   add.x=x2;
                                                                   add.y=y2;
                                                                   Q.push(add);
                                                                     }
                                                                     }
                                                                     }
                                            flag[x1][y1]=1;
                                                                     }
                             if(vis[c-1][b-1]<=tm)
                             {
                                                  printf("YES\n");
                                                  printf("%d\n",tm-vis[c-1][b-1]);
                                                  }
                             else
                             printf("NO\n");
                             }
         return 0;
}                                 
            int checkvalid(int x1, int y1,int x, int y)
{
    if(x1>=0 && x1<m && y1>=0 && y1<n)
             return 1;             
    else return 0;
}
