#include <cstdio>
#include<cmath>
#define max 1000002
using namespace std;
int arr[max+1]={0};
int a[11][max+1]={0};
int cntr=0;
int main() {    
   int  t;
   //sieve();
   int i,j;
        
        for(i=2;i<(max);++i)
      {         
             if(arr[i]>0)continue;
             
             for(j=i;j<max;j+=i){
                     arr[j]++;                     
             }
            
      }
   //for(int i=0;i<max;i++)printf("%d\n",arr[i]);
   arr[0]=0;
   arr[2]=1;
   arr[3]=1;
   arr[1]=0;
   for(int i=1;i<max;i++){
           for(int j=1;j<11;j++){
                   a[j][i]=a[j][i-1];        
           }
           a[(arr[i])][i]++;
           
   }
   //printf("%d",arr[max]);
   int c,b,n;
   
   scanf("%d",&t);
   while(t--)
   {
        cntr=0;
        scanf("%d%d%d",&c,&b,&n);
        if(n==0){if(c>1)printf("0\n");else printf("1\n");continue;}        
        //else if(n==1){printf("%d\n",b-c+1);}
        else if(arr[b]==n&&arr[c]==n)printf("%d\n",a[n][b]-a[n][c]+1);
        else printf("%d\n",a[n][b]-a[n][c]); 
   }
return 0;
}
