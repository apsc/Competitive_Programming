#include <cstdio>
#include<cmath>
#define max 100000
using namespace std;
int arr[max]={0};
void sieve(){
        int i,j;
        
        for(i=2;i<(max);++i)
      {         
             if(arr[i]>0)continue;
             
             for(j=2*i;j<max;j+=i){
                     arr[j]++;                                          
             }
            
      }
}
long long int maxi=0,m,n,index;
int main() {

   int  t;
   sieve();
   
   //mergeSort(a,0,cntr-1);
    
    scanf("%d",&t);
    while(t--)
    {
              
              maxi=0;
              index=0;
                 scanf("%lld %lld",&m,&n);
                 if(n<=3){printf("%lld\n",n);continue;}
                 for(int i=m;i<=n;i++)
                 {
                         if(arr[i]>=maxi){maxi=arr[i];index=i;}
                 }
                 printf("%lld\n",index);    
    }
return 0;
}
