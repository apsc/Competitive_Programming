#include<cstdio>
int main(){
    int t,n,cntr;
    scanf("%d",&t);
    while(t--){
               scanf("%d",&n);
               cntr=n;
               for(int i=1;n/(i+1)-i>0;i++){
                       cntr+=((n/(i+1))-i);
               }
               printf("%d\n",cntr);
    }
    
    return 0;    
}
