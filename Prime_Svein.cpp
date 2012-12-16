#include<stdio.h>
#include<cmath>
#define n 32000
long long int arr[n]={0};
long long int a[n]={0};
long long int cntr=0;
void sieve(){
     for(long long int i=2;i*i<=n;i++){
                                      if(arr[i]==0){a[cntr]=i;cntr++;}
                                      for(long long int j=i*i;j<=n;j+=i){
                                              if(arr[i]==1)continue;
                                              arr[j]=1;                                                        
                                      }
                                       
     }     
}



int main(){
    sieve();
    long long int t,flag=1;
    long long int m,p;
    scanf("%lld",&t);
    for(;t>0;t--){
                  
                  scanf("%lld %lld",&m,&p);
                  if(m==1)++m;
                  //int p=m;
                  //int arr[n-m+1];
                  
                 
                  for(long long int i=m;i<=p;i++){
                          flag=1;
                          for(long long int j=0;j<n && a[j]!=0 && a[j]<=sqrt(i);j++){
                                  if(i%a[j]==0){flag=0;break;}        
                          }
                          
                          if(flag==1){
                          printf("%lld\n",i);
                          }
                  }
                  
                  printf("\n");
    }
    return 0;    
}
