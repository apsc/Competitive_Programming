#include<stdio.h>
int a[20][3],n;
int q[1000];
int mini=100000;
int temp2=0;
void travel(int row,int col){
    if(row==n-1){
                 
                 if(temp2<mini)mini=temp2;
                 
                 return;
                 
    }
    for(int i=0;i<3;i++){
            if(i^col){
                      temp2+=a[row+1][i];
                      travel(row+1,i);
                      temp2-=a[row+1][i];
            }
    }
}
int main(){
    int t,temp=0;
    scanf("%d",&t);
    
    while(t--){
               
               scanf("%d",&n);
               for(int i=0;i<n;i++){
                                   for(int j=0;j<3;j++){
                                           scanf("%d",&a[i][j]);
                                   }                                   
               }
               int min=100000;
               for(int j=0;j<3;j++){
                       temp2=0,mini=1000000;
                       temp=a[0][j];
                       travel(0,j);
                       temp+=mini;
                       if(temp<min)min=temp;
                       
               }
               printf("%d\n",min);
    }
    return 0;    
}
