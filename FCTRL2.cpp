#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(;t>0;t--){
                  char arr[160]={'0'};
                  arr[0]='1';
                  int n;
                  int temp1;
                  scanf("%d",&n);
                  int count=0;
                  for(int i=2;i<=n;i++){
                          int j=0;int temp2=0;
                          for(j=0;arr[j]!='0';j++){
                                 temp1=(arr[j]-'0')*i+temp2;                                 
                                 if(temp1>9){temp2=temp1%10;count++;}
                                 arr[j]=temp1/10+'0';
                          }
                          if(temp1>9){arr[j]=temp1%10+'0';}        
                  } 
                  for(int j=0;j<=count;j++){
                                        printf("%d",arr[j]-'0');                      
                  }
                  printf("\n");         
    }
    return 0;    
}
