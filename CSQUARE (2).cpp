#include<stdio.h>
//#include<conio.h>
long long int pow_2(long long int a,long long int b){
    if (b==1) return a;
    if(b==0) return 1;
    long long int temp=pow_2(a,b/2);
    if(b&1)
    return temp*temp*a;
    return temp*temp;
}

long long int convert(long long int b){
        long long int temp=0,cntr=0;
        long long int p=b;
        long long int i=0,j;
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
long long int answer(long long int a,long long int b,int m){
     long long int ans=1;
     
     while(b>=1){                
                if(b&1)
                ans=((ans)*(a%m))%m;
                a=a*a%m;
                b=b>>1;                           
     }
     return ans;
                            
}

int main(){
    long long int t;
    scanf("%lld",&t);
    
    while(t>0){
            long long int b,a,m;
            scanf("%lld %lld %lld",&a,&b,&m);
            b=convert(b);
            //printf("%lld\n",b);
            printf("%lld\n",answer(a,b,m));
            
            t--;
    }
    return 0;    
}
