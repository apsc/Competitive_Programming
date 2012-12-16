#include<stdio.h>
int tempa[20];
void flip(int j){
              tempa[j]^=1;
              if(j!=0)
              tempa[j-1]^=1;
              if(j!=19)
              tempa[j+1]^=1;
          return;
}
int main(){
                  char g;
                  int a[20];                 
                  for(int i=0;i<20;i++){
                          scanf("%d",&a[i]);
                          scanf("%c",&g);
                  }                  
                  int temp=20,min=100,flag,cntr,temp2,k=1<<temp;
                  for(int i=1;i<k;i++){
                          temp2=i;
                          flag=0;
                          cntr=0;
                          for(int i=0;i<20;i++){
                                  tempa[i]=a[i];        
                          }                          
                          for(int j=0;temp2>0;j++){
                                  if(temp2&1==1){
                                                  flip(temp-1-j);     
                                                  cntr++;
                                  }
                                  temp2=temp2>>1;
                          }                          
                          for(int k=0;k<temp;k++){
                                  if(tempa[k]==1){
                                                flag=1;
                                                break;          
                                  }
                          }
                          if(flag==0){
                                   if(cntr<min){
                                                min=cntr;
                                   }         
                          }
                          
                  }       
                  printf("%d",min);
    return 0;    
}
