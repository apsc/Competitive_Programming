#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    int a,b;
    while(t--){
            scanf("%d %d",&a,&b);
            char str[1001];
            scanf("%s",&str);
            
            int temp=strlen(str);
            
            char p[1001];
            int i=0;
            for(;i<temp;i++){
                     p[i]=(str[i]-96+a*i+b)%26 + 96;
                     if(p[i]==96)p[i]='z';
                     printf("%c",p[i]);
            }            
            printf("\n");
    }    
    return 0;
}
