#include<stdio.h>
int xf,yf,time,min;
int cntr;
int a[101][101];
int m,n;
int posx[4]={-1,1,0,0},posy[4]={0,0,1,-1};
void rescue(int c,int b){
     if(cntr>time)return;
      //printf("%d\n",cntr);
     if(c==xf&&b==yf){
                      //printf("I am Here!");
                      if(min>cntr)min=cntr;
                      //printf("%d\n",min);
                      return;
     }     
     //printf("%d\n",cntr);
     int newx,newy;
     for(int i=0;i<4;i++){
             newx=c+posx[i];
             newy=b+posy[i];
             if(newx<0||newx>=m||newy<0||newy>=n)continue;
             cntr+=a[newx][newy];
             rescue(newx,newy);
             cntr-=a[newx][newy];     
     }
     
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
               cntr=0;
               min=10000;
               scanf("%d%d",&m,&n);
              
               for(int i=0;i<m;i++){
                       for(int j=0;j<n;j++){
                               scanf("%d",&a[i][j]);        
                       }
               }
               
               scanf("%d%d%d",&xf,&yf,&time);
               
               xf--;yf--;
               int xi=0,yi=0;
               cntr+=a[xi][yi];
               rescue(xi,yi);
               if(min<=time){
                          printf("YES\n%d\n",time-min);           
               }else printf("NO\n");
    }
    return 0;    
}
