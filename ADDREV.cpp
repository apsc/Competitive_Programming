#include<stdio.h>
int reverse(int *p){
                int temp=0;
                while(*p>0){
                            temp=temp*10+(*p%10);
                            *p/=10;
                }
                return temp;
    }
int main(){
           int a,b,c,i;
           scanf("%d",&a);
           int temp[a];
           i=a;
           while(a>0){
                      scanf("%d %d",&b,&c);
                      temp[a]=reverse(&b)+reverse(&c);
                      temp[a]=reverse(&temp[a]);
                      a--;
           }
           while(i>0){
                      printf("%d\n",temp[i]);
                      i--;
           }           
           return 0;             
    }
