#include<stdio.h>
int main(){
    int t,n,a,d;
    long long int temp;
    scanf("%d",&t);
    for(;t>0;t--){
                  temp=0;
                  scanf("%d%d%d",&n,&a,&d);                            
                  for(int i=0;i<n;i++){
                          temp+=a;
                          a+=d;        
                  }
                  printf("%d\n",temp);
    }
    return 0;    
}
