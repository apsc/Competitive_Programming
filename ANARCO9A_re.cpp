#include<stdio.h>
#include<cstring>
using namespace std;
int main(){
    char str[20020],stack[20020];
    int t=1,top;
    while(1){
             int cntr=0;
             top=0;
             scanf("%s",&str);
             if(str[0]=='-')break;
             int len=strlen(str);
             for(int i=0;i<len;i++){
                     if(top==0){stack[top]=str[i];top++;}
                     else if(str[i]=='{'){
                                     stack[top]='{';
                                     top++;
                     }
                     else if(str[i]=='}'){
                          if(stack[top-1]=='{')top--;
                          else {
                               stack[top]='}';
                               top++;
                          }
                     }
             }
             //if(top>0)
             for(int i=0;i<top/2;i++){
                     if((stack[i]=='}'&&stack[top-1-i]=='{')){cntr+=2;}
                     else cntr++;                     
             }
             
             printf("%d. %d\n",t,cntr);
             t++;                      
    }
    return 0;
}
