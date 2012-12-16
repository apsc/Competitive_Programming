#include<stdio.h>
int main(){
    int t;
    int flag=0;
    scanf("%d",&t);
    for(;t>0;t--){
                  
                  long long int n;
                  scanf("%lld",&n);
                  long long int temp=n;
                  int cntr=0;
                  while(temp>0){
                  cntr++;
                  temp/=4;              
                  }
                  there:
                  int temp2=1;
                  for(int i=0;i<cntr-2;i++){
                          temp2=temp*4;        
                  }
                  if(n-temp2>4){
                                n=n-temp2; 
                                flag++;             
                  }else{temp2/=4;
                  n-=temp2;
                  flag++;
                  }
                  if(n!=0)goto there;
                  if(flag%2==0)printf("Hulk");
                  else printf("Thor");
                  
                  
                                
    }
    return 0;    
}
