#include<stdio.h>
int qx[50000],qy[50000],visited[10000][5]={0},pit[10000][5],mid,turnx[]={1,0},turny[]={0,1};
int isValid(int p,int q){
    if(p>=mid||p<0||q>=5||q<=0||pit[p][q]==1)return 0;
    else return 1;
}
int main(){
    int t,k,low,high,flag,xf,yf,xi,yi,front,rear,cntr,min;
    scanf("%d",&t);
    while(t--){
               flag=0;
               scanf("%d",&k);
               low=4;high=10000;
               while(flag==0){
                              cntr=0;front=0;rear=0;min=1000;
                              mid=(low+high)/2;
                              pit[0][2]=1;pit[mid/2][0]=1;pit[mid/2][2]=1;pit[mid/2][4]=1;pit[mid-1][2]=1;
                              int destx=mid-1,desty=4;                              
                              qx[rear]=0;qy[rear]=0;rear++;
                              visited[0][0]=1;
                               
                              while(front<=rear){
                                                 xi=qx[front];yi=qy[front];front++;
                                                 for(int i=0;i<2;i++){
                                                                  xf=xi+turnx[i];yf=yi+turny[i];
                                                                  //if(cntr>min)break;
                                                                  if(xf==destx&&yf==desty){min=cntr;break;}
                                                                  if(isValid(xf,yf)==0||visited[xf][yf]==1)continue;
                                                                  qx[rear]=xf;qy[rear]=yf;rear++;
                                                                  //printf("treap\n");
                                                                  visited[xf][yf]=1;
                                                                  
                                                 }
                                                 cntr++;
                              }
                              printf("%d\n",min);
                              pit[0][2]=0;pit[mid/2][0]=0;pit[mid/2][2]=0;pit[mid/2][4]=0;pit[mid-1][2]=0;
                              for(int i=0;i<mid;i++){
                                      for(int j=0;j<5;j++){
                                              visited[i][j]=0;
                                      }
                              }
                              if(cntr==k)flag=1;
                              else if(cntr>k)low=mid+1;
                              else high=mid-1;
               }
               
    }
    
    return 0;
}
