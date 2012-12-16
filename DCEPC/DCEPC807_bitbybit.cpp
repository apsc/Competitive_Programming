#include<stdio.h>
#include<iostream>
using namespace std;
#define MAX 1000006
int a[MAX]={0};
int main(){
    int t,n,flag,i,temp,cntr;
    scanf("%d",&t);
    a[0]=1;
    for(i=1;i<MAX;i<<=1){
               a[i]=1;
    }
    for(i=1;i<MAX;i++){
               if(a[i]!=1){
                           flag=0;
                           temp=i;
                           int p=1;
                           int q=INT_MAX-1;
                           //printf("%d",q);
                           while(p<=temp)
                           {
                                         
                                         if(temp&p==1){
                                                       int x=temp&q;
                                                       if(a[x]==1){a[i]=0;flag=1;break;}
                                         }
                                         
                                         p<<=1;
                                         q=(q<<1)|1;
                           }
               }
               if(flag==1)a[i]=1;
    }
    //for(int i=0;i<MAX;i++)printf("%d\t",a[i]);
    while(t--){
               cntr=0;
               scanf("%d",&n);
               if(a[n]==0)printf("Bob\n");
               else if(a[n]==1)printf("Alice");
    }
    return 0;
}
