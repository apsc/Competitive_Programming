#include<stdio.h>
int t[]={3,19,99,499,4999,49999,499999,4999999,49999999};
int main(){
    long long int n;
    while(scanf("%lld",&n)!=EOF){
               long long int temp;
               
               if(n==1){printf("1\n");continue;}
               temp=n;
               long long int cntr=1,cnt=0;
               while(temp>0){temp/=10;cntr*=10;cnt++;}
               long long int num=1,day=1;
               int s=t[cnt]+1;
               //printf("%d\n",s);
               while(s--!=0&&num!=n){
                             num=(num*7)%cntr;                             
                             day++;              
               }
               //printf("%d\n",s);
               if(s==-1){printf("-1\n");continue;}
               printf("%d\n",day);
    }   
    return 0;    
}
