#include<stdio.h>
int a[10000007];
int main(){
    int t;
    long long int n,temp;
    scanf("%d",&t);
    for(;t>0;t--){
                  temp=0;
                  scanf("%lld",&n);
                  for(int i=0;i<n;i++){
                          scanf("%lld",&a[i]);
                          if(!(i==n-1))
                          temp+=a[i];                          
                  }
                  printf("%lld\n",temp);                               
                  
    }    
    
}
