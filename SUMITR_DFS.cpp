#include<stdio.h>
int a[100][100]={-1};
int posx[]={1,1};
int posy[]={0,1};
int cntr,n,max;
void find(int xi,int yi){
     if(xi==n-1){
                 if(cntr>max)max=cntr;
                 return;
     }     
     int xf,yf;
     for(int i=0;i<2;i++){
             xf=xi+posx[i];
             yf=yi+posy[i];
             cntr+=a[xf][yf];
             find(xf,yf);
             cntr-=a[xf][yf];
     }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
               cntr=0;
               max=-1;
               scanf("%d",&n);
               for(int i=0;i<n;i++){
                       for(int j=0;j<=i;j++)
                       scanf("%d",&a[i][j]);
               }
               int xi=0,yi=0;
               cntr+=a[xi][yi];
               find(xi,yi);
               printf("%d\n",max);                
    }
    return 0;
}
