#include<cstdio>
#include<iostream>
using namespace std;

int turnx[]={-1,-1,-1,1,1,1,0,0},turny[]={0,1,-1,0,1,-1,1,-1};
int n,a[1000][1000],x1[1000000],y1[1000000],flag[1000][1000];
int main(){    
    scanf("%d",&n);
    int rear=0,front=0,newx,newy;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            flag[i][j]=0;
    }
    
    for(int i=0,j=0;j<n;j++)if(a[i][j]==1){x1[rear]=0;y1[rear++]=j;}
    
    int flag1=0,flag2=0;
    while(front<rear){
          int x=x1[front],y=y1[front++];
          for(int i=0;i<8;i++){
                  newx=x+turnx[i];
                  newy=y+turny[i];
                  if(newx<n&&newy<n&&newx>=0&&newy>=0&&a[newx][newy]==1&&flag[newx][newy]==0){
                        if(newx==n-1){flag1=1;break;}
                        x1[rear]=newx;y1[rear++]=newy;
                  }
                  
          }
          
          flag[x][y]=1;
    }
    rear=0;
    for(int i=1,j=0;j<n;j++)if(a[i][j]==2){x1[rear]=1;y1[rear++]=j;}
    front=0;
    while(front<rear){
          int x=x1[front],y=y1[front++];
          for(int i=0;i<8;i++){
                  newx=x+turnx[i];
                  newy=y+turny[i];
                  
                  if(newx<n&&newy<n&&newx>=0&&newy>=0&&a[newx][newy]==2&&flag[newx][newy]==0){
                        if(newx==n-1){flag2=1;break;}                        
                        x1[rear]=newx;y1[rear++]=newy;
                  }
                  
          }
          flag[x][y]=1;
    }
    if(flag1&&flag2)printf("AMBIGUOUS");
    else if(flag1)printf("1");
    else if(flag2)printf("2");
    else printf("0");
    return 0;   
}
