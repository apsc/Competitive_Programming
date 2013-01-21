#include<stdio.h>
#include<limits.h>
int px[110000],py[110000],a[1100][1100],visited[1100][1100],flag[1100][1100],cntr,m,n;
int isValid(int p,int q){
    if(p<0||p>=m||q<0||q>=n)return 0;
    else return 1;
}
int main(){
    int t,front,rear,posx[4]={-1,1,0,0},posy[4]={0,0,1,-1},xf,yf,time;
    scanf("%d",&t);
    while(t--){
               front=0;rear=0;cntr=0;
               scanf("%d %d",&m,&n);
               for(int i=0;i<m;i++){
                       for(int j=0;j<n;j++){
                               scanf("%d",&a[i][j]);  
                               visited[i][j]=INT_MAX;
                               flag[i][j]=0;      
                       }
               }
               scanf("%d %d %d",&xf,&yf,&time);
               xf--;yf--;
               visited[0][0]=a[0][0];
               px[rear]=0;
               py[rear++]=0;               
               while(front<=rear||flag[xf][yf]==0){                                         
                       int xi=px[front];
                       int yi=py[front++];                       
                       if(flag[xi][yi])continue;
                       for(int i=0;i<4;i++){
                               int newx=xi+posx[i];
                               int newy=yi+posy[i];
                               if(isValid(newx,newy))
                               {
                                    if(visited[xi][yi]+a[newx][newy]<visited[newx][newy])
                                    {
                                        visited[newx][newy]=visited[xi][yi]+a[newx][newy];
                                        px[rear]=newx;
                                        py[rear++]=newy;                                        
                                    }
                               }
                       }
                       flag[xi][yi]=1;
               }
               if(time-visited[xf][yf]>=0)printf("YES\n%d\n",time-visited[xf][yf]);
               else printf("NO\n");
    }
    return 0;
        
}
