#include<stdio.h>
#include<string.h>
int main(){
    int n;
   
   while(scanf("%d",&n)!=EOF){
                  char b[201];
                  scanf("%s",&b);
                  if(n==0)return 0;
                  int temp=strlen(b)/n;
                  int a[temp][n];
                  int k=0;
                  //printf("i am here");   
                  for(int i=0;i<temp;i++){
                          for(int j=0;j<n;j++,k++)
                          a[i][j]=b[k];
                          i++;
                          if(i==temp)break;
                          for(int j=n-1;j>=0;j--,k++)
                          a[i][j]=b[k];
                  }     
                  //printf("i am here");             
                   for(int i=0;i<n;i++)
                   {
                           for(int j=0;j<temp;j++)
                           printf("%c",a[j][i]);        
                   }          
                   printf("\n");
    }
    return 0;    
}
