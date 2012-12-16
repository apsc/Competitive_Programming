/*Solution By :- Chirag Gupta*/
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <utility>
using namespace std;

#define clr(a) memset(a,0,sizeof(a))
#define set(a) memset(a,-1,sizeof(a))
#define R(a) freopen(a,"r",stdin)

template <class T> T gcd(T a, T b) { return b==0 ? a : gcd(b,a%b) ; }
template <class T> T maxm(T a, T b) { return a > b ? a : b ; }
template <class T> T minm(T a, T b) { return a < b ? a : b ; }
template <class T> T abs(T a) { return a > 0 ? a : (-1)*a ; }
template <class T> T sq(T a) { return a * a ; }
int hash[1000009];
int temp[1000010];
int main()
{
    int a[1009],t,i,j,k,l,h,n,tmp[1009],h1[1009],cnt;
    long long count;
    scanf("%d",&t);
    while(t--){
               cnt=0;
               clr(hash);
               clr(h1);
               clr(tmp);
               scanf("%d%d%d",&n,&l,&h);
               for(i=0;i<n;i++){scanf("%d",&a[i]);hash[a[i]]=1;tmp[a[i]]=i;}
               for(i=0;i<n;i++){
                                for(j=i+1;j<n;j++){
                                                   int temp1=a[i]+a[j];
                                                   //h1[cnt]=j;
                                                   if(temp1>=h)
                                                   continue;
                                                   temp[cnt]=temp1;
                                                   h1[cnt++]=j;
                                                   
                                }
               }
               count=0;
               for(i=0;i<cnt;++i)
               {
                                 while(1){
                                 if(h<l) break;
                                 if(h-temp[i]>0)
                                 {
                                                if(hash[h-temp[i]]==1 && tmp[h-temp[i]]>h1[i])
                                                count++;
                                 }
                                 h--;
                                 }
               }
               printf("%lld\n",count);
               
}                                                   
    //R(".txt");
    return 0;
}
