#include<stdio.h>
int main(){
    int t,sum=0,temp=0;
    long int n;
    scanf("%d",&t);
    if(t>200)return 0;
    while(t>0){
               sum=0;
               int flag=0;
               scanf("%ld",&n);
               int sum0=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0;
               
               int b[n];
               for(int i=0;i<n;i++){
                       scanf("%d",&b[i]);
                       if(b[i]%10==0)
                       b[i]/=10;
                       if(b[i]<10)                       
                       sum0^=b[i];
                       if(b[i]<20)
                       sum1^=b[i];
                       if(b[i]<30)
                       sum2^=b[i];
                       if(b[i]<40)
                       sum3^=b[i];
                       if(b[i]<50)
                       sum4^=b[i];
                       if(b[i]<60)
                       sum5^=b[i];
                       if(b[i]<70)
                       sum6^=b[i];
                       if(b[i]<80)
                       sum7^=b[i];
                       if(b[i]<90)
                       sum8^=b[i];
                       if(b[i]<100)
                       sum9^=b[i];
               }       
                       if(sum0+sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9==0)
                       printf("YES\n");
                       else printf("NO\n");
                       
    }
}
