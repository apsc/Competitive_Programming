#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    while(!(a==0&&b==0&&c==0)){
                               if(b-a==c-b){printf("AP %d\n",c+b-a);goto there;}
                               //float e,f;
                               //e=(float)b/a;
                               //f=(float)c/b;
                               //f=f*c;
                               printf("GP %d\n",c*c/b);
                               there:
                               scanf("%d %d %d",&a,&b,&c);                           
    }
    return 0;    
}
