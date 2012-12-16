#include<stdio.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    
    int j=0;
    while(n!=0){
                if(n&1==1){                
                j++;}
                if(j>1)
                break;            
                n=n>>1;
    }
    //printf("%d\n",j);
    
    if(j==1)
    printf("TAK");
    else printf("NIE");
    return 0;    
}

