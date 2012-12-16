#include<stdio.h>
char a[51][51]={'x'};
int cntr,start[20][2],iterations,max;
int posx[]={-1,-1,-1,0,0,1,1,1};
int posy[]={-1,0,1,-1,1,-1,0,1};
int isValid(int b, int c);
void getsetgo(int xi,int yi){
     int xf,yf;
     int asciii=a[xi][yi];
     for(int i=0;i<8;i++){
             xf=xi+posx[i];
             yf=yi+posy[i];
             int asciif=(int)a[xf][yf];
             if(isValid(xf,yf)&&(asciif==(asciii+1))){
                                                 iterations++;
                                                 getsetgo(xf,yf);
                                                 iterations--;
             }
             else{
                  if(iterations>max)max=iterations;
             }
     }
}
int isValid(int b, int c){
    if(c<0||c>51||b<0||b>51||(a[b][c]=='x'))return 0;
    else return 1;
}
int main(){
    int p=1;
    int m,n;
    char temp[51];
    scanf("%d%d",&m,&n);
    while(m!=0&&n!=0){
                      max=0;
                      iterations=0;
                      cntr=0;
                      for(int i=0;i<m;i++){
                              scanf("%s",&temp);
                              for(int j=0;j<n;j++){
                                      a[i][j]=temp[j];
                                      if(a[i][j]=='A'){
                                                       start[cntr][0]=i;
                                                       start[cntr][1]=j;
                                                       cntr++;
                                      }
                              }
                      }
                      
                      for(int i=0;i<cntr;i++){
                              iterations=1;                                      
                              int xi=start[i][0];
                              int yi=start[i][1];
                              getsetgo(xi,yi);
                      }
                      printf("Case %d: %d\n",p,max);
                      p++;
                      scanf("%d%d",&m,&n);
    }
}
