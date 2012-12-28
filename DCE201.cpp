#include<stdio.h>
#include<cstring>
//#include<conio.h>
#include<iostream>
using namespace std;
char a[20],tempa[20];
void flip(int j){
          if(j==0){
                   if(tempa[1]=='1')tempa[1]='0';
                   else tempa[1]='1'; 
                   if(tempa[0]=='0')tempa[0]='1';
                   else tempa[0]='0';
                   return;
          }
          else if(j==19){
                   if(tempa[18]=='1')tempa[18]='0';
                   else tempa[18]='1';
                   if(tempa[19]=='0')tempa[19]='1';
                   else tempa[19]='0';
                   return;
          }
          
          if(tempa[j-1]=='0')tempa[j-1]='1';
          else tempa[j-1]='0';
          
          if(tempa[j+1]=='0')tempa[j+1]='1';
          else tempa[j+1]='0';
          
          if(tempa[j]=='0')tempa[j]='1';
          else tempa[j]='0';
          return;
}
int cntr;

int main(){
    //int t;
    //scanf("%d",&t);                 
                  for(int i=0;i<20;i++){
                          scanf("%c",&a[i]);
                          getchar();
                  }                  
                  int temp=20;//strlen(a);
                  int min=100;
                  int flag;
                  for(int i=1;i<(1<<temp);i++){
                          int temp2=i;
                          flag=0;
                          cntr=0;
                          for(int i=0;i<20;i++){
                                  tempa[i]=a[i];        
                          }                          
                          for(int j=0;temp2>0;j++){
                                  if(temp2&1==1){
                                                  //printf("here!%d\n%d\n",temp2,temp-1-j);
                                                  flip(temp-1-j);     
                                                  cntr++;
                                  }        
                                  temp2=temp2>>1;
                                  
                          }
                          //printf("tempa:::%s\n\n\n",tempa);                          
                          for(int k=0;k<temp;k++){
                                  if(tempa[k]=='1'){
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
    //getch();
    return 0;    
}
