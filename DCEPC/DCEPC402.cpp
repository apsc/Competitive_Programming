#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
               int n,cntr=0;               
               scanf("%d",&n);
               if(n<=22&&n!=3&&n!=6&&n!=9&&n!=11&&n!=12&&n!=14&&n!=15&&n!=17&&n!=18&&n!=20&&n!=21){printf("NO\n");continue;}
               int temp=1000000;
               if(n>22){
                        cntr=n/10;
                        temp=cntr*11;
                        int flag=1;
                        while(flag){
                                    if(temp>n){temp-=11;cntr--;}
                                    else flag=0;            
                        }
                        flag=1;
                        while(flag){
                                    int temp2=n-temp;
                                    int a=temp2/3;
                                    float f=temp2/3.0;
                                    if(ceil(f)-f==0){printf("%d\n",cntr+a);flag=0;}
                                    else {temp-=11;cntr--;}
                                    
                        }
               }
               else{
               for(int i=0;11*i<=n;i++){
                       for(int j=0;i*11+j*3<=n;j++){
                               if(i*11+j*3==n&& temp>i+j)temp=i+j;        
                       }        
               }
               if(temp==1000000)printf("NO\n");
               else printf("%d\n",temp);
               }
    }
    return 0;    
}
