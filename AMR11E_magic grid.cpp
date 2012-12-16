#include<stdio.h>
int m,n,cntr,min,posx[]={1,0},posy[]={0,1},a[500][500],b[500][500]={0},flag=0;
int isValid(int,int);
void find(int xi,int yi){
     if(cntr<0&&flag==0){if(min<cntr)min=cntr;flag=1;}
     int xf,yf;     
     for(int i=0;i<2;i++){
             xf=xi+posx[i];
             yf=yi+posy[i];
             if(b[xf][yf]==1||isValid(xf,yf)==0)continue;
             cntr+=a[xf][yf];
             b[xf][yf]=1;
             find(xf,yf);
             if(xi==0&&yi==0)flag=0;
             cntr-=a[xf][yf];
             b[xf][yf]=0;
     }
}
int isValid(int p,int q){
    if(p>m||q>n)return 0;
    else return 1;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
               cntr=0;
               min=-100;
               scanf("%d%d",&m,&n);
               for(int i=0;i<m;i++){
                       for(int j=0;j<n;j++){
                               scanf("%d",&a[i][j]);
                       }        
               }
               m--;n--;
               int xi=0,yi=0;
               cntr+=a[xi][yi];
               find(xi,yi);
               
               if(min==-100)min=0;
               printf("%d\n",1-min);
               
    }
}
