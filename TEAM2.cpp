#include<stdio.h>
int main(){
    long long a,b,c,d,temp,arr[4],cntr=0;
    while(scanf("%lld%lld%lld%lld",&a,&b,&c,&d)!=EOF){
          arr[0]=a;arr[1]=b;arr[2]=c;arr[3]=d;
          for(int i=3;i>0;i--){
                  for(int j=0;j<i;j++){
                          if(arr[j]>arr[j+1]){
                               temp=arr[j];
                               arr[j]=arr[j+1];
                               arr[j+1]=temp;
                          }
                  }
          }
          cntr++;
          printf("Case %lld: %lld\n",cntr,arr[3]+arr[2]);
    }
    return 0;
}
