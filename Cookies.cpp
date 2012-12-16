#include<stdio.h>
#define p 10000007
int pow(int a, int b){
    if (b==1) return a;
    if(b==0) return 1;
    long long int temp=pow(a,b/2);
    if(b&1)
    return (((temp*temp)%p)*a)%p;
    return (temp*temp)%p;
}
int main(){
    int t;
    scanf("%d",&t);
    for(;t>0;t--){
                  int n;
                  long long int temp;
                  scanf("%d",&n);
                  temp=pow(n,n+1);
                  printf("%d\n",temp-n+1);
    }
    return 0;    
}
