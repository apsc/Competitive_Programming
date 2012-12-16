#include <cstdio>
#include<cmath>
#define max 1000000
using namespace std;
int arr[max+1]={0};
int a[11][max+1];
int cntr=0;
int main() {
   int  t;
   int i,j;
 
        for(i=2;i<=(max);++i)
      {
             if(arr[i]>0)
                 continue;
 
             for(j=i;j<=max;j+=i)
                     arr[j]++;
      }
   for(int i=0;i<8;i++)
   {
           for(int j=1;j<=max;j++)
           {
               if(arr[j]==i)
                    a[i][j]=a[i][j-1]+1;
               else
                    a[i][j]=a[i][j-1];
           }
   }
   int c,b,n;
 
   scanf("%d",&t);
   while(t--)
   {
        scanf("%d%d%d",&c,&b,&n);
        printf("%d\n",a[n][b]-a[n][c-1]);
   }
return 0;
}
