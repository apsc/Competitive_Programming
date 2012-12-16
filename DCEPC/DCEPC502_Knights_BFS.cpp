#include<stdio.h>
int bfs(int);
char a[12][12],qx[1100],qy[1200];
int arrx[12], arry[12],counter,n,m,front,rear;
int turnx[8]={2,2,-2,-2,-1,1,-1,1},turny[8]={-1,1,-1,1,2,2,-2,-2};
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    int i,j,k,count;
    scanf("%d%d",&m,&n);
//    printf("%d %d",m,n);
    k=0;
    for(i=0;i<m;i++)
    {
                    scanf("%s",&a[i]);
                    for(j=0;j<n;j++)
                    {
                                    if(a[i][j]=='.')
                                    {
                                          arrx[k]=i;
                                          arry[k++]=j;
                                          }
                                          }
                                          }
    front=0;
    rear=0;
    int max=-100;
    for(i=0;i<k-1;i++)
    {
                    for(j=i+1;j<k;j++)
                    {
                                      qx[rear]=arrx[i];
                                      qy[rear++]=arry[i];
                                      qx[rear]=arrx[j];
                                      qy[rear++]=arry[j];
                                      count=1;counter=0;
                         //             flb[arrx[i]][arry[i]]='B';
                          //            flw[arrx[j]][arry[j]]='W';
                                      int ans=bfs(count);
                                      if(ans>max)
                                      max=ans;
                                      }
                                      }
                         printf("%d\n",max);
}
return 0;
}
int bfs(int count)
{
    int i,d,maxbc=-100,maxwc=-100;
    int tm[12][12]={0};
    tm[qx[front]][qy[front++]]=tm[qx[front]][qy[front++]]=count;
    front=0;
    char flb[12][12],flw[12][12];
    flb[qx[front]][qy[front++]]='B',flw[qx[front]][qy[front++]]='W';
    front=0;
    int flag[12][12]={0};
//    printf("%d\n",count);
    while(front<=rear)
    {
                      
                      int x=qx[front];
                      int y=qy[front];
                      front++;
                      count=tm[x][y];
                      if(flag[x][y]==1)
                      continue;
                      if(flb[x][y]=='B')
                      {
                                        if(count>maxbc)
                                        maxbc=count;
                      }
                      else if(flw[x][y]=='W')
                      {
                           if(count>maxwc)
                           maxwc=count;
                      }
                      count++;
                      for(i=0;i<8;i++)
                      {
                                      d=0;
                                      int x1=x+turnx[i];
                                      int y1=y+turny[i];
                                      if((flb[x][y]=='B'&&flw[x1][y1]=='W')||(flw[x][y]=='W'&&flb[x1][y1]=='B')){
                                              counter++;
                                              continue;
                                      }
                                      if(x1>=0 && x1<m && y1>=0 && y1<n && a[x1][y1]!='#')
                                      {
                                               if(flb[x][y]=='B' && flw[x1][y1]!='W' && flb[x1][y1]!='B')
                                               d=1;
                                               else if(flw[x][y]=='W' && flb[x1][y1]!='B' && flw[x1][y1]!='W')
                                               d=2;
                                      }
                                      else
                                      continue;
                                   //   if(d=checkvalid(x1,y1,x,y))
                                  //    {
                                    //                         if(d==0)
                                          //                   continue;
                                                           qx[rear]=x1;
                                                           qy[rear++]=y1;
//                                                           count++;
                                                           tm[x1][y1]=count;
                                                           if(d==1)
                                                           flb[x1][y1]='B';
                                                           else if(d==2)
                                                           flw[x1][y1]='W';
                                            //               }
                                                           }
                                            flag[x][y]=1;
                                                           }
                      return (maxbc+maxwc-counter);
}

