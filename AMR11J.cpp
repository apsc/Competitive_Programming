#include<stdio.h>
int m,n;
char a[501][501];
int time[501][501]={0},visited[501][501]={0};
struct queue{
       int x,y;              
}q[260000];
int isValid(int p,int q){
     if(p>=m||q>=n||p<0||q<0||a[p][q]=='#')return 0;
     else return 1;
}
int main(){
    int t,posx[]={-1,1,0,0},posy[]={0,0,-1,1},rear,front,xi,yi,xf,yf;
    char temp[502];
    scanf("%d",&t);
    while(t--){
               rear=0;front=0;
               scanf("%d%d",&m,&n);
               for(int i=0;i<m;i++){
                       scanf("%s",&temp);
                       for(int j=0;j<n;j++){
                               a[i][j]=temp[j];
                               if(a[i][j]!='.'&&a[i][j]!='#'){
                                                            q[rear].x=i;
                                                            q[rear].y=j;
                                                            time[i][j]=0;
                                                            //q[rear].time=0;
                                                            rear++;
                                                            visited[i][j]=1;
                                                            //printf("%c\n",a[i][j]);
                               }        
                       }        
               }
               while(front<=rear){
                                  xi=q[front].x;
                                  yi=q[front].y;
                                  front++;                                  
                                  if(a[xi][yi]=='*'||a[xi][yi]=='#')continue;
                                  for(int i=0;i<4;i++){
                                          xf=xi+posx[i];
                                          yf=yi+posy[i];
                                          
                                          if(visited[xf][yf]==1&&isValid(xf,yf)==1){                                                              
                                                              if(a[xf][yf]==a[xi][yi])continue;
                                                              else if(time[xi][yi]+1==time[xf][yf]){       
                                                                        //printf("%c at %d,%d just got cut by %c at %d,%d\n",a[xf][yf],xf,yf,a[xi][yi],xi,yi);                                                       
                                                                        a[xf][yf]='*';
                                                                        continue;
                                                              }
                                                              else if(time[xi][yi]+1>time[xf][yf])continue;
                                                              else if(time[xi][yi]+1<time[xf][yf]){
                                                                                                   a[xf][yf]=a[xi][yi];
                                                                                                   time[xf][yf]=time[xi][yi]+1;
                                                                                                   continue;
                                                              }
                                          }
                                          if(isValid(xf,yf)==1){
                                                             q[rear].x=xf;
                                                             q[rear].y=yf;
                                                             time[xf][yf]=time[xi][yi]+1;
                                                             rear++;
                                                             a[xf][yf]=a[xi][yi];
                                                             visited[xf][yf]=1;
                                          }
                                  }
               }
               for(int i=0;i<m;i++){
                       for(int j=0;j<n;j++){
                               printf("%c",a[i][j]);
                               visited[i][j]=0;time[i][j]=0;
                       }
                       printf("\n");
               }
    }
    return 0;    
}
