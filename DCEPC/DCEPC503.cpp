#include<stdio.h>
#include<map>
using namespace std;
int main(){
    
    int t,cntr,n;
    long long int a;
    scanf("%d",&t);
    while(t--){               
               map <long long int,int>m;
               cntr=0;               
               scanf("%d",&n);
               for(int i=0;i<n;i++){
                       scanf("%lld",&a);                       
                       if(m[a]==0){m[a]=1;cntr++;}
               }
               printf("%d\n",cntr-1);
    }
    return 0;
}
