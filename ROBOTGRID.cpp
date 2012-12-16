#include<stdio.h>
int m=2147483647,visited[1001][1001],n;
char a[1001][1001];
struct que{
       int x,y;
}q[1001];
int isValid(int p,int q){
    if(p<0||p>=n||q<0||q>=n||a[p][q]=='#')return 0;
    else return 1;
}
int main(){
    int front=0,rear=0,xi,yi,newx,newy,posx[]={1,0},posy[]={0,1},cntr=0;;
    char temp[1001];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
            scanf("%s",&temp);
            for(int j=0;j<n;j++){
                    a[i][j]=temp[j];
                    visited[i][j]=-1;
            }
    }
    q[rear].x=0;
    q[rear].y=0;
    rear++;
    while(front<=rear){
                       xi=q[front].x;
                       yi=q[front].y;
                       front++;
                       for(int i=0;i<2;i++){
                               newx=xi+posx[i];
                               newy=yi+posy[i];
                               printf("postion %d,%d goes in\n",newx,newy); 
                               if(isValid(newx,newy)==0)continue;
                               printf("postion %d,%d comes out\n",newx,newy);
                               if(visited[newx][newy]!=-1)visited[newx][newy]++;
                               
                               /*if(visited[newx][newy]!=-1){
                                                           if(visited[newx][newy]>i)
                                                           visited[newx][newy]=i;
                                                           continue;
                               }*/
                               if(visited[newx][newy]!=-1&&visited[newx][newy]<visited[xi][yi]){visited[newx][newy]=visited[xi][yi];continue;}
                               if(visited[newx][newy]!=-1&&visited[newx][newy]>visited[xi][yi]){continue;}
                               q[rear].x=newx;
                               q[rear].y=newy;
                               rear++;
                               visited[newx][newy]=1;
                       }
    }
    if(visited[n-1][n-1]==-1)printf("INCONCEIVABLE");
    else if(visited[n-1][n-1]>=2)printf("THE GAME IS A LIE");
    else printf("%d",visited[n-1][n-1]);
    return 0;    
}
