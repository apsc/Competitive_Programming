#include<stdio.h>
int main(){
    long long int t;
    scanf("%lld",&t);
    for(;t>0;t--){
                  getchar();
                  long long int a,n,sum=0;
                  scanf("%lld",&n);
                  if(n==0){printf("YES\n");continue;}
                  for(long long int i=0;i<n;i++){
                           scanf("%lld",&a);
                           sum=(sum+a)%n;         
                  }
                  if(sum==0){printf("YES\n");continue;}
                  else{printf("NO\n");continue;}              
    }
    return 0;    
}
