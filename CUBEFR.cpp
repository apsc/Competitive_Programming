#include<stdio.h>
//#include<conio.h>
#define max 1000001
using namespace std;
int a[max]={0};
int ans[max]={0};
int num[max]={0};
int cntr=4,cnt;
void foo(){
     for(int i=2;i*i<=max;i++){
             if(a[i]==1)continue;             
             for(int j=2*i;j<=max;j+=i){
                     a[j]=1;
                     cnt=0;
                     int temp=j;
                     while(temp%i==0){cnt++;temp/=i;if(temp==0)break;}
                     //cnt--;                              
                     if(cnt>=3){
                         ans[j]=1;
                         //printf("%d\n",j);
                         //getch();                              
                     }
             }             
     }     
     
     num[1]=1;
     num[2]=2;
     num[3]=3;
     for(int i=4;i<max;i++){
             if(ans[i]!=1){
                           num[cntr]=i;
                           cntr++;
             }        
     }
}
int main(){
    int t,m=1;
    foo();
    scanf("%d",&t);
    //for(int i=0;i<100;i++)printf("%d\t%d\n",num[i],cntr);
    while(t--){
               int n,flag=0,index;
               scanf("%d",&n);
               int i=1,j=cntr,mid=(i+j)/2;
               while(j>i&&num[mid]!=n){
                          //if(num[mid]==n){index=mid;flag=1;break;}
                          if(n>num[mid]){i=mid+1;}
                          else j=mid-1;
                          mid=(i+j)/2;
                          //printf("%d\t%d\n",i,j);
                          
               }
               if(num[mid]==n){printf("Case %d: %d\n",m,mid);}
               else printf("Case %d: Not Cube Free\n",m);
               
               m++;
    }
    return 0;    
}
