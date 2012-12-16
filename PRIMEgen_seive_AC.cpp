#include <cstdio>
#include<cmath>
#include<cstring>
#define max 32000
using namespace std;
bool *p=new bool[max];
void sieve(){
        int i,j;
        memset(p,true,(sizeof(bool)*max));
        for(i=2;i<(max);++i)
      {
         if(p[i]){
             for(j=i*i;j<max;j+=i)
                     p[j]=false;
            }
      }
}
int prime[max];
int calprime(){
      int i,k=0;
      for(i=2;i<(max);++i)
      {
          if(p[i]){
          prime[k]=i;
          k++;
          }
        }
    return k;
}
int main() {

   int  i,t,no_prime,flag;
   sieve();
   no_prime=calprime();
    long int m,n,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld%ld",&m,&n);
        if(m==1)
        m++;
        /*for(x=m;x<=n;++x)
        {
            flag=1;
            for(i=0;prime[i]<=sqrt(x)&&i<no_prime;++i)
            {
                if(x%prime[i]==0)
                {
                    flag=0;
                    break;
                    }
             }
            if(flag&&x>1){
            printf("%ld\n",x);
            }
        }*/
            printf("\n");
            
    }
return 0;
}
