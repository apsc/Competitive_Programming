#include <cstdio>
#include<cmath>
#include<map>
#include<cstring>
#define max 32000
using namespace std;
long int cntr=0;
bool *p=new bool[max];
map <long int,long int> mapi;
//int array[10000007]={0};
void sieve(){
        int i,j;
        memset(p,true,(sizeof(bool)*max));
        for(i=2;i<(max);++i)
      {
         if(p[i]){
             for(j=2*i;j<max;j+=i)
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
int cntr2=0;
int main() {

   int  i,t,no_prime,flag;
   sieve();
   no_prime=calprime();
    long int m,n,x;
    while(true)
    {
              
        n=10000000;
         if(mapi[n]!=0){cntr=mapi[n];goto there;}
         //if(array[n]!=0){cntr=array[n];goto there;}
        for(x=2;x<=n;++x)
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
            //printf("%ld\n",x);
            cntr++;}
            mapi[x]=cntr;
            //array[x]=cntr;
        }   
            there:
            if(cntr2!=0){
            double f=n/log(n);
            double result=((cntr-f)/cntr)*100;
            if(result<0)result*=-1;
            printf("%0.1lf\n",result);
            //printf("cnttr:%d\n",cntr);
            cntr=0;}
            cntr2++;
            scanf("%ld",&n);
        if(n==0)return 0;
    }
return 0;
}
