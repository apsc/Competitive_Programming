#include<stdio.h>
#include<map>
using namespace std;
map<long long int,int> m;
int a[166],cntr,n;
long long int mul,maxi;
void fun(int n){
     if(n<0)return;
     if(n<=0&&m[mul]==0){cntr++;m[mul]=1;if(maxi<mul)maxi=mul;return;}
     for(int i=1;a[i]<=n;i++){
                              mul*=a[i];
                          fun(n-a[i]);
                              mul/=a[i];
     }
}
int main(){
    int t;
    a[0]=0;a[1]=1;
    for(int i=2;i<160;i++){
                          a[i]=a[i-1]+a[i-2];
                          
    }
    scanf("%d",&t);
    while(t--){
               mul=1;cntr=0;maxi=0; 
               scanf("%d",&n);
               fun(n);
               printf("%d\n",cntr);
               for(long long int i=0;i<=maxi;i++){
                        if(m[i]==1)m[i]=0;
               }
    }
    return 0;    
}
