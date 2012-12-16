#include<stdio.h>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
// int a[1000001];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
               int n;
               scanf("%d",&n);
              
               /*memset(a,0,sizeof(a)/sizeof(a[0]));
               int cntr=0;
               for(int i=n;i>1;i--){
               
                       for(int j=2;j<i;){
                               if(i%j==0){                                                  
                                          a[j]=1;
                               }
                               j++;
                                  
                       }
                       if(!a[i]){printf("%d\n",i);cntr++;}
               }*/
              
               if(n&1)
               printf("%d\n",n/2+1);
               else printf("%d\n",n/2);
    }
    return 0;    
}
