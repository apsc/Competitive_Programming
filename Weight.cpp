#include<stdio.h>
long long int a[10000007];
int main(){
    int t;
    
    scanf("%lld",&t);
    while(t>0){
               long long int n;
               scanf("%lld",&n);
               long long int w=1;
               long long int ans=0;
               for(long long int i=0;i<n;i++){
                                scanf("lld",&a[i]);
                                if(i>0 && a[i]>0)w=i;
                                if(i>0 && a[i]<0)w=2;
                                ans=ans+a[i]*w;
               }
              printf("%lld\n",ans);               
               t--;           
    }
    return 0;
}
