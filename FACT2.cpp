#include<stdio.h>
void factorial(int n){
     long long int fact=1;
     for(int i=1;i<=n;i++)
     fact=fact*i;     
     printf("%lld",fact);
}
int main(){
    int n;
    while(true){
    
    scanf("%d",&n);
    factorial(n);}
    return 0;    
}
