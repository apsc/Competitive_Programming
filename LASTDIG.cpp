#include<stdio.h>
int pow(int a,long long int b){
    if (b==1) return a;
    if(b==0) return 1;
    int temp=pow(a,b/2);
    if(b&1)
    return (((temp*temp)%10)*a)%10;
    return (temp*temp)%10;
}
int main(){
    int t;
    scanf("%d",&t);
    for(;t>0;t--){
                  int a;
                  long long int b;
                  scanf("%d%lld",&a,&b);
                  printf("%d\n",pow(a,b));              
    }
    
    return 0;
        
}
