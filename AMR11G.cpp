#include<stdio.h>
#include<conio.h>
char[] check(char *p){
                 char a[]="You shall not pass!";
                 char b[]="Possible"
                  while(*p!='\0'){
                                  if(*p=='D'){
                                              return a;
                                  };
                  }
                  return b;
       }
int main(){
           int a,i;
           scanf("%d",&a);
           i=a;
           char temp[10][10];
           while(a>0){
                      scanf("%s",&temp[a-1]);
                      temp[a-1]=check(&temp[a-1]);
                      a--;           
           }
           while(i>0){
                      printf("%s",temp[i-1]);
                      i--;
           }
           getch();
           return 0;
    }
