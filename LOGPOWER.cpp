#include<stdio.h>
long long int m;
long long int power(long long int a,long long int b){
    if (b==1) return a;
    if(b==0) return 1;
    long long int temp=power(a,b/2);
    if(b&1)
    return (((temp*temp)%m)*a)%m;
    return (temp*temp)%m;
}
int main(){
    int t;
    long long int a,b;
    scanf("%d",&t);
    for(;t>0;t--){
                  scanf("%lld%lld%lld",&a,&b,&m);
                  printf("%lld\n",power(a,b));
                  
    }
}
