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
                          temp=0;
                           while(!((temp>=65 && temp<=65+26)||(temp>=97 && temp<=97+26)||temp==32)){
                                            temp=temp*10+(a[i]-'0');
                                            i++;                 
                                            //printf("temp:%d\n",temp);
                           }
                           //printf("%d\n",temp);
                           printf("%c",temp);
                  }
    }
    return 0;    
}
