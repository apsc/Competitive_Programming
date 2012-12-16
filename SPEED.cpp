#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;

int main(){
    int t,a,b;
    scanf("%d",&t);
    while(t--){
               map <double, int> m;
               scanf("%d%d",&a,&b);
               if(a<0)a*=-1;
               if(b<0)b*=-1;
               int cntr=1;
               if(a>b){
                       while(m[p]!=1){
                                      double p=(cntr*b*1.0)/a*1.0;
                                      if(p>1.0)p-=1.0;
                                      m[p]=1;
                                      cntr++;
                       }
                       
               }
               else{
                    while(m[p]!=1){
                                      double p=(cntr*a*1.0)/b*1.0;
                                      if(p>1.0)p-=1.0;
                                      m[p]=1;
                                      cntr++;
                       }     
               }
    }    
    return 0;
}
