#include<stdio.h>
int px[110000],py[110000],a[1100][1100],visited[1100][1100],cntr,m,n;
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
                               visited[i][j]=-1;
                       }
               }
               for(int i=0;i<m;i++){
                       for(int j=0;j<n;j++){
                               scanf("%d",&a[i][j]);        
                       }
               }
               scanf("%d %d %d",&xf,&yf,&time);
               xf--;yf--;
               visited[0][0]=a[0][0];
               px[rear]=0;
               py[rear]=0;
               rear++;
               //printf("Parent of %d,%d is %d,%d\n",0,0,parentx[0][0],parenty[0][0]);
               while(front<=rear){                                         
                       int xi=px[front];
                       int yi=py[front];
                       front++;
                       for(int i=0;i<4;i++){
                               int newx=xi+posx[i];
                               int newy=yi+posy[i];
                               if(isValid(newx,newy)==0)continue;
                               else{
                                    if(visited[newx][newy]==-1)visited[newx][newy]=visited[xi][yi]+a[newx][newy];
                                    else if(visited[xi][yi]+a[newx][newy]>visited[newx][newy])continue;
                                    else if(visited[xi][yi]+a[newx][newy]<visited[newx][newy]){visited[newx][newy]=visited[xi][yi]+a[newx][newy];continue;}
                                    //if(add[newx][newy]==1)continue;
                                    px[rear]=newx;
                                    py[rear]=newy;
                                    rear++;
                                    //add[newx][newy]=1;
                                    //printf("%d,%d--%d\n",newx,newy,visited[newx][newy]);
                               }
                       }
               }
               /*for(int i=0;i<m;i++){
                       for(int j=0;j<n;j++){
                               printf("%d\t",visited[i][j]);        
                       }        
               }*/
               //min+=a[0][0];
               //printf("%d\n",visited[3][1]);
               if(time-visited[xf][yf]>=0)printf("YES\n%d\n",time-visited[xf][yf]);
               else printf("NO\n");
               
    }
    return 0;
        
}
