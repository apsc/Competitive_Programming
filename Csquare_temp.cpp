#include<stdio.h>
#include<conio.h>
int pow_2(int a, int b){
    if (b==1) return a;
    if(b==0) return 1;
    int temp=pow_2(a,b/2);
    if(b&1)
    return temp*temp*a;
    return temp*temp;
}
static int a,b,m;


int convert(int b){
        int temp=0,cntr=0;
        int p=b;
        int i=0,j;
        while(p>0){
                   j=p%10;
                   //printf("%d\n",j);
                   //printf("%d\n",pow(3,i));
                   temp=temp+j*pow_2(3,i);
                   //printf("%d\n",temp);
                   p/=10;
                   i++;                   
        }
        return temp;
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

    scanf("%d",&t);
    while(t>0){
    scanf("%d %d %d",&a,&b,&m);
    b=convert(b);
    int an=answer();
    printf("a:%d b:%d ans:%d\n",a,b,an);
    t--;
    }
    //getch();
    return 0;
}
