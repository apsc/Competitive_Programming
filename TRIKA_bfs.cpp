#include<stdio.h>
int ground[30][30],m,n,x,y,front=0,rear=0,qx[909000],qy[909000],xi,xf,yi,yf,posx[2]={0,1},posy[2]={1,0},power[30][30],visited[30][30]={0};
int main(){
    scanf("%d%d",&m,&n);
    scanf("%d%d",&x,&y);
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                    scanf("%d",&ground[i][j]);
            }
    }
    m--;n--;x--;y--;
    int min=9999;
    qx[rear]=x;qy[rear]=y;
    power[x][y]=ground[x][y];
    rear++;
    while(front<=rear){
                      xi=qx[front];yi=qy[front];
                      if(xi==m&&yi==n){
                                       if(min>power[xi][yi])min=power[xi][yi];
                                       front++;
                      }
                      else
                      {   
                          for(int i=0;i<2;i++){
                              xf=xi+posx[i];
                              yf=yi+posy[i];
                              if(visited[xf][yf]==1){if(power[xf][yf]>power[xi][yi]+ground[xf][yf])power[xf][yf]=power[xi][yi]+ground[xf][yf];}
                              else if(xf<=m&&yf<=n&&visited[xf][yf]==0){
                                                 qx[rear]=xf;qy[rear]=yf;
                                                 power[xf][yf]=power[xi][yi]+ground[xf][yf];
                                                 rear++;
                                                 visited[xf][yf]=1;
                              }
                          }
                          front++;
                      }
                      
    }
    min-=ground[x][y];
    if(min>ground[x][y])printf("N");
    else printf("Y %d",ground[x][y]-min);
    return 0;
}
