#include<stdio.h>
#include<conio.h>
static int a,b,m;
int pow(int a, int b){
    if (b==1) return a;
    if(b==0) return 1;
    int temp=pow(a,b/2);
    if(b&1)
    return temp*temp*a;
    return temp*temp;
}
int answer(){
     int ans=1;
     
     while(b>=1){                
                if(b&1)
                ans=(ans*(a%m))%m;
                a=a*a;
                b=b>>1;                           
     }
     return ans;
                            
}
int main(){
    while(1){
    scanf("%d %d %d",&a,&b,&m);
    int an=answer();
    printf("a:%d b:%d ans:%d\n",a,b,an);
    }
    getch();
    return 0;
}
