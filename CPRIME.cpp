#include<iostream>
#include<math.h>
using namespace std;
bool prime[50000000]={false};
long store[50000000];
int main()
{
    long long int   n;
    //cin>>n;
    n=100000000;
    long long int len=(long long int)sqrt(n);
    long long int max=n/2,y=len/2;
    
    for(long long int i=1;i<=y;i++)
    {
             if(!prime[i])
            for(long long int j=3*i+1;j<=max;j+=2*i+1)
            {
                    prime[j]=true;
            }
            
    }
    long long int r=0;
    for(long long int j=0;j<=max;j++)
    if(!prime[j])
    {
    store[r++]=2*j+1;
    //cout<<2*j+1<<" ";
    }
    //int t;
    //cin>>t;
    long long int num;
    scanf("%lld",&num);
    //cin>>num;
    //while(t--)
    while(num!=0)
    {
    
    
    long long int start=0,end=r-1,mid,k;
    mid=(start+end)/2;
    while(store[start] !=store[mid] )
    {
                //cout<<store[start]<<" "<<store[mid]<<" "<<store[end];
                if(store[mid] > num)
                end=mid;
                else
                start=mid;
                mid=(start+end)/2;
                //system("pause");
                
                
    }
    
    
    k=start;
    
    
    if(num>=2)
    k++;
    //cout<<" num : "<<k<<" ";
    double ans=((k-(num/(double)log(num)))/k)*100;
    if(ans<0)
    ans=ans*-1;
    //ans=(ans*10+0.5)/10;
    printf("%.1lf\n",ans);
    //find primes from 100000-7 to 1000-9
    scanf("%lld",&num);
   // cin>>num;
}
    //cout<<"here";
   // system("pause");
    return 0;
    }

