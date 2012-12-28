#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
               scanf("%d",&n);
               if(n<=2)printf("%d\n",n);
               else
                   printf("%d\n",n/2+1);
    }
    return 0;
    
}
