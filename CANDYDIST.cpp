#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
               int n,m,p=0,minn=10000007,minp=10000007;
               scanf("%d%d",&n,&m);
               int a,b,c=0;
               
               scanf("%d",&a);
               for(int i=0;i<m-1;i++){
                       scanf("%d",&b);        
                       if(a==b)p--;
                       else{
                            p+=(b-a);
                            c-=(b-a);
                       }                  
                       //printf("%d\n",p);    
                       if(c<minn)minn=c;
                       if(p<minp)minp=p;
                        a=b;
               }
               //minp=--p;
               n+=minn+minp;
               if(n<0)printf("-1\n");
               else printf("%d\n",-p);
    }    
}
