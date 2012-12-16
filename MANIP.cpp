#include<stdio.h>
#include<math.h>
int answer(int n){
    int p;
    int cntr=0,ans=1,ans2=1,cntr2=0;
    if(n==1)return 5;
    else if(n==0)return 0;
    p=n;cntr=0;ans=1;ans2=1;
    while(p!=0){
               p/=2;
               cntr++;
               ans*=5;
               ans2*=2;               
    }
    ans2/=2;
    cntr=n-ans2;
     if(cntr<0)cntr=0;
    return (ans+answer(cntr));
}
int main(){
    long unsigned int t,n;
    scanf("%u",&t);
    while(t>0){
               
               scanf("%u",&n);
               printf("%u\n",answer(n));               
               t--;
    }
    return 0;
}
