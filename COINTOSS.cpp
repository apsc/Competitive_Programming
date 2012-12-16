#include<stdio.h>
int main(){
    int  t,m,n;
    long long int temp=0;
    scanf("%d",&t);
    for(;t>0;t--){
                  scanf("%d %d",&n,&m);
                  temp=0;
                  if(n==m){printf("0.00\n\n");continue;}
                  if(m==0){
                           for(int i=1;i<=n;i++){
                                   temp+=(1<<i);
                           }
                           printf("%lld.00\n\n",temp);
                  }else{
                           for(int i=1;i<=n;i++){
                                   temp+=(1<<i);
                           }
                           printf("%lld.00\n\n",n-m+(temp>>1));
                        
                  }
    }
    return 0;    
}
