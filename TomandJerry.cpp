#include<cstdio>
int main(){
    int t,a[109][109],flag[109][109],cntr=0,front=0,rear=0,qx[111100],qy[111100],currx,curry,newx,newy;
    scanf("%d",&t);
    int turnx[]={0,0,-1,1},turny[]={1,-1,0,0};
    for(int i=0;i<t;i++)
    for(int j=0;j<t;j++){
            scanf("%d",&a[i][j]);
            flag[i][j]=0;
    }
    qx[rear]=0;qy[rear++]=0;
    
    while(front<=rear){
          currx=qx[front];
          curry=qy[front++];
          if(flag[currx][curry])continue;
          for(int i=0;i<4;i++){
                  newx=currx+turnx[i];
                  newy=curry+turny[i];
                  if(a[newx][newy]==1)continue;
                  if(newx==t-1&&newy==t-1)cntr++;
                  if(flag[newx][newy])continue;
                  if(newx>=0&&newx<t&&newy>=0&&newy<t){
                        qx[rear]=newx;
                        qy[rear++]=newy;
                  }
          }
          flag[currx][curry]=1;
    }
    printf("%d",cntr);
    return 0;    
}
