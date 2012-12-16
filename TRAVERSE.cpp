#include<stdio.h>
int n,posx[]={1,0},posy[]={0,1},xf,yf,min=0,a[500][500];
void getsetgo(int xi,int yi){
     if(xf==n-1&&yf==n-1){
                          min++;
                          return;
     }

     if(a[xi][yi]==0)return;
     for(int i=0;i<2;i++){
             xf=xi+a[xi][yi]*posx[i];
             yf=yi+a[xi][yi]*posy[i];
             if(xf<n&&yf<n){
                            
                            getsetgo(xf,yf);
                            
             }
     }
}
int main(){
    scanf("%d",&n);
    
    char c[n+1];
    for(int i=0;i<n;i++){
            scanf("%s",&c);
            for(int j=0;j<n;j++){
                    a[i][j]=c[j]-'0';
            }
    }
    getsetgo(0,0);
    
    printf("%d",min);
    return 0;    
}
