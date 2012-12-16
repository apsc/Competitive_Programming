#include<stdio.h>
char q[10000];
int front,rear,a[60][60],px[3600],py[3600],m,n;
int posx[]={-1,-1,-1,0,0,1,1,1};
int posy[]={-1,0,1,-1,1,-1,0,1};
int visited[60][60]={0};
int isValid(int p,int q){
    if(p>=m||p<0||q>=n||q<0||visited[p][q]==1)return 0;
    else return 1;    
}
int main(){
    int p=1;
    char temp[60];
    scanf("%d %d",&m,&n);
    while(m!=0&&n!=0){
                      front=0;rear=0;
                      for(int i=0;i<m;i++){
                              //printf("%d\n",i);
                              scanf("%s",&temp);
                              for(int j=0;j<n;j++){
                                      a[i][j]=temp[j];
                                      visited[i][j]=0;
                                      if(a[i][j]=='A'){
                                                       px[rear]=i;
                                                       py[rear]=j;
                                                       visited[i][j]=1;
                                                       q[rear]='A';
                                                       rear++;
                                      }
                              }
                      }
                      if(rear==0){printf("Case %d: 0\n",p);p++;scanf("%d %d",&m,&n);continue;}
                      while(front<rear){
                                         int xi=px[front];
                                         int yi=py[front];                                         
                                         front++;
                                         for(int i=0;i<8;i++){
                                                 int xf=xi+posx[i];
                                                 int yf=yi+posy[i];
                                                 if(isValid(xf,yf)==1&&((int)a[xf][yf]==(int)(a[xi][yi]+1))&&a[xf][yf]<=90&&a[xf][yf]>=65){
                                                                    visited[xf][yf]=1;
                                                                    q[rear]=a[xf][yf];
                                                                    px[rear]=xf;
                                                                    py[rear]=yf;
                                                                    rear++;
                                                 }
                                         }
                      }
                      rear--;
                      printf("Case %d: %d\n",p,q[rear]-64);
                      p++;
                      scanf("%d %d",&m,&n);
                      for(int i=0;i<60;i++){
                              for(int j=0;j<60;j++){
                                      visited[i][j]=0;
                              }        
                      }
    }
}
