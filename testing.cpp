#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char a[4];
    scanf("%s",&a);
    printf("%s %d",a,strlen(a));
    int b[20]={1};
    for(int i=0;i<20;i++){printf("\n%d",b[i]);}
    //b={4,3,2,1};
    getch();
    return 0;    
    
}
