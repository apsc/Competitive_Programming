#include <cstdio>
#include<cmath>
#include<cstring>
//#include<map>
//#include<iostream>
#define max 32000
using namespace std;
//map<long long int,long long int> mapi;
long long int mapi[10000007];
long long int cntr=0;
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
long long int cnt=0;
int main() {

   int  i,t,no_prime,flag;
   sieve();
   no_prime=calprime();
   long int m,n,x;
    cnt=0;
   for(x=2;x<=1000000;++x)
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
            //if(mapi[cntr]==0){
            if(flag&&x>1){  
                            cnt+=x;                   
                        //    mapi[cntr]=cnt;
                          //  cntr++;
                          //cntr+=x;
                          //mapi[cntr]=cntr;                          
            }
            mapi[cntr]=cnt;cntr++;
            //mapi[cntr]=cntr;
            //}
        }
    scanf("%d",&t);
    while(t--)
    {
              //cnt=0;
        scanf("%ld",&n);
        if(n==0||n==1){printf("%d\n",0);continue;}
        
            printf("%lld\n",mapi[n]);
            
    }
return 0;
}
