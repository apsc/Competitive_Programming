#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
int  g = 0;
long long int a,m;
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
                   temp=(temp+j*pow_2(3,g));
                   //printf("%d\n",temp);
                   p/=10;
                   g++;                   
        }
        printf("b after:%d",temp);
        return temp;
        
}
long long int answer(long long int a,char b[],c){
     long long int ans=1;
     
     while(b){                
                if(b&1)
                ans=((ans)*(a%m))%m;
                a=(a*a*a);
                b=b>>1;                           
     }
     return ans;
                            
}
 
int main(){
    long long int t;
    scanf("%lld",&t);
    
    while(t>0){
            long long int f=0;
            int c=0;
            char b[250];
            
            scanf("%lld %s %lld",&a,&b,&m);
            long long int s=0;
            printf("b:%s\n",b);
            int i=0;
            int cntr=0;
            for(int i=0;b[i]!='\0';i++)
            cntr++;
            
            i=0;
            printf("cntr:%d\n",cntr);
            while(cntr-i>0){
                        int j=i;
                       for(;i<j+5 && cntr-i>0;i++){
                               s=s+(int)(b[cntr-i-1]-'0')*pow_2(10,i);                           
                       }         
                       printf("s:%d\n",s);               
                        f+=convert(s);
                        
                        
            }
            printf("f::%d\n",f);
            printf("answer:%lld\n",answer(a,f));
            g=0;
            t--;
    }
    return 0;    
}
