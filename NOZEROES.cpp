#include<stdio.h>
#include<cstring>
int main(){
    int t;
    scanf("%d",&t);
    for(;t>0;t--){
                  char a[100];
                  scanf("%s",&a);
                  long long int ans=1;
                  int temp=strlen(a);
                  //printf("%d\n",temp);
                  for(int i=0;i<temp;i+=2){                          
                          ans=ans*(a[i]-'0');        
                  }
                  //printf("%lld\n",ans);
                  if(ans==0){printf("Robot hanged");continue;}
                  while(ans%10==0)
                  ans=ans/10;
                  ans=ans%10;
                  printf("%lld\n",ans);
                  
    }
    return 0;    
    
}
