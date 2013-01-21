#include <stdio.h>
#include <cstring>

int main()
{
    int a,b,c,t,i,j,k,carry;
    
    scanf("%d",&t);
    while(t--){
               scanf("%d%d",&a,&b);
               i=0;j=0;
               while(a>0){
                          i=i*10+a%10;a/=10;
               }
               while(b>0){
                          j=j*10+b%10;b/=10;
               }
               //printf("%d%d",i,j);
               c=i+j;
               k=0;
               while(c>0){
                          k=k*10+c%10;c/=10;
               }
               printf("%d\n",k);
               
    }
    return 0;
}
