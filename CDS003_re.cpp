#include<stdio.h>
#include<cstring>
char a[10000007];
int main(){
    int t;
    scanf("%d",&t);
    for(;t>0;t--){
                  scanf("%s",&a);
                  int temp=0;
                  for(int i=0;i<strlen(a);i++)
                  {
                          
                          temp= temp*10+(a[i]-'0');
                          if(temp==32){printf("%c",temp);temp=0;continue;}
                          if(temp<65)continue;
                          printf("%c",temp);
                          temp=0;
                  }
                  printf("\n");
                  
                  
    }
    return 0;    
}
