#include<stdio.h>
void go(int n,int b){
     if(n==1){
     printf("2(0)+");return;}
     if(n==2){
              printf("2(2(0))+");return;}
     int c=0;
     int temp=b;
     for(;temp>0;c++)temp/=10;
     for(int i=b;i>=0;i--){
     if(i&n==1)
     go(i,c);
     }
     return;
          
}
int main(){
    int t;
    scanf("%d",&t);
    for(;t>0;t--){
                  int n;
                  int cntr=0;
                  int temp=0;
                  scanf("%d",&n);
                  temp=n;
                  for(;temp>0;cntr++)temp=temp/10;
                  go(n,cntr);
    }
    return 0;
        
}
