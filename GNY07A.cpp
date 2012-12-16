#include<stdio.h>
#include<cstring>
int cntr=1;
int main(){
    int n;
    scanf("%d",&n);
    for(;n>0;n--){
                  char a[90];
                  int m;                  
                  scanf("%d",&m);
                  getchar();
                  gets(a);
                  printf("%d ",cntr);
                  for(int i=0;i<strlen(a);i++){
                          if(i==m-1)continue;
                          printf("%c",a[i]);                          
                  }
                  cntr++;
                  printf("\n");
                  
    }
    
    return 0;    
}
