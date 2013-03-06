#include<cstdio>
int cntr=0,t,turnx[]={0,0,-1,1},turny[]={1,-1,0,0},a[109][109],flag[109][109];
void start(int x,int y){
     if(x<0||x>=t||y<0||y>=t)return;
     if(x==t-1&&y==t-1){cntr++;return;}
     for(int i=0;i<4;i++){
             int newx=x+turnx[i],newy=y+turny[i];
             if(a[newx][newy]==1||flag[newx][newy]==1)continue;
             flag[newx][newy]=1;
             start(newx,newy);
             flag[newx][newy]=0;
     }
}
int main(){
    scanf("%d",&t);    
    for(int i=0;i<t;i++)
    for(int j=0;j<t;j++){
            scanf("%d",&a[i][j]);
            flag[i][j]=0;
    }
    start(0,0);   
    printf("%d",cntr>>1);
    return 0;
}
