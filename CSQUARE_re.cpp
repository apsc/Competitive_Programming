#include<stdio.h>
char b[300];
long int a;
long int m;

long long int answer(long int a,int c){
     long int ans=1;
     
     while(c-1>=0){
                if((b[c-1]-'0')==1)
                ans=(ans*(a%m))%m;
                if((b[c-1]-'0')==2)
                ans=(ans*((a*a)%m))%m;
                a=(((a*a)%m)*a)%m;
                c--;                       
     }
     return ans;
                            
}
 
int main(){
    int t;
    scanf("%d",&t);
    
    while(t>0){
            
            
            
            scanf("%ld %s %ld",&a,&b,&m);
            
            //printf("b:%s\n",b);
            
            int cntr=0;
            for(int i=0;b[i]!='\0';i++)
            cntr++;
                        
            //printf("cntr:%d\n",cntr);
           
           
            printf("%d\n",answer(a,cntr));
            
            t--;
    }
    return 0;    
}
