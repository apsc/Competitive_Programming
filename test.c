#include<stdio.h>
char a[16]={'m','f','f','m','f','m','m','f','f','m','m','f','m','f','f','m'};
int main(){
    int t;
    long long int ans,m,n;
    scanf("%d",&t);    
    while(t--){
               scanf("%lld%lld",&m,&n);               
               ans=n%16-1;
               if(ans<0)ans=0;
               if(a[ans]=='m')printf("Male\n");
               else printf("Female\n");
    }
    return 0;    
}
