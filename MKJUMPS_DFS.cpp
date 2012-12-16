#include<iostream>
#include<stdio.h>
using namespace std;
int a[10][10]={0},n,start,end,p,maxi;
int posx[]={-2,-2,-1,-1,1,1,2,2},posy[]={-1,1,-2,2,-2,2,-1,1};
int isValid(int,int);
void find(int xi,int yi){
     int xf,yf;
     if(maxi>p)p=maxi;
     for(int i=0;i<8;i++){
             xf=xi+posx[i];
             yf=yi+posy[i];
             if(isValid(xf,yf)&&a[xf][yf]==1){
                                //cout<<"here";
                                maxi++;
                                a[xf][yf]=2;                               
                                find(xf,yf);                                
                                maxi--;
                                a[xf][yf]=1;                                
             }
     }
     
}
int isValid(int m,int n){
     if(m>10||m<0||n>10||n<0||a[m][n]==0)return 0;
     else return 1;
}
int main(){
    int total,m=1;
    scanf("%d",&n);
    while(n!=0){              
                           int xi,yi;
                           maxi=0;total=0;p=0;
                           //for(int i=0;i<8;i++)cntr[i]=1;
                           for(int i=0;i<n;i++){
                                           scanf("%d%d",&start,&end);
                                           for(int j=start;j<start+end;j++){
                                                   a[i][j]=1;
                                                   if(i==0&&j==start){xi=i;yi=j;}
                                           }
                                           total+=end;
                           }                           
                           
                           /*for(int i=0;i<n;i++){                                           
                                           for(int j=0;j<10;j++){
                                                   printf("%d\t",a[i][j]);
                                           }       
                                           printf("\n");                                    
                           }*/
                           maxi++;
                           a[xi][yi]=2;
                           find(xi,yi);
                           
                           
                           /*for(int i=0;i<8;i++){
                                   if(cntr[i]>maxi)max=cntr[i];
                           }*/
                           int ans=total-p;
                           if(ans==1)cout<<"Case "<<m<<", "<<ans<<" square can not be reached.\n";
                           else
                           cout<<"Case "<<m<<", "<<ans<<" squares can not be reached.\n";
                           m++;
                           scanf("%d",&n);
                           for(int i=0;i<10;i++){
                                   for(int j=0;j<10;j++){
                                           a[i][j]=0;
                                   }        
                           }
    }
    return 0;
}
