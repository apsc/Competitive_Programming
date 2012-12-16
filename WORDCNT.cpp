#include<stdio.h>
#include<string.h>
int main(){
    char a[1000];
    char b[1000];
    int t,c1,c2,cntr,max;
    scanf("%d",&t);
    
    for(;t>0;t--){
                  cntr=0;max=0;
                  scanf("%s",&a);
                  c1=strlen(a);
                  scanf("%s",&b);
                  while(b!="\n"&&b!="\n\r"&&b!="\r"){
                          c2=strlen(b);
                          if(c1==c2) cntr++;
                          else{max=cntr;cntr=0;}
                          c1=c2;
                          scanf("%s",&b);
                  }
                  printf("%d",max);
    }
    return 0;    
}
