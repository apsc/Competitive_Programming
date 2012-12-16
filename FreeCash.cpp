#include<stdio.h>

int main(){
    int h[24][60]={0};
    int n,a,b,max=0;
    scanf("%d",&n);
    while(n--){
           scanf("%d%d",&a,&b);
           h[a][b]++;
           max=(max>h[a][b])?max:h[a][b];
    }
    printf("%d",max);
    
    return 0;    
}
