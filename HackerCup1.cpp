#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
string str;
int a[26];
void quick(int low,int high){
     if(low>=high)return;
     int temp;     
     int mid=(low+high)/2;
     if((a[high]>a[mid]&&a[high]<a[low])||(a[high]>a[low]&&a[high]<a[mid])){
                     temp=a[high];
                     a[high]=a[low];
                     a[low]=temp;
     }
     if((a[mid]>a[high]&&a[mid]<a[low])||(a[mid]>a[low]&&a[mid]<a[high])){
                     temp=a[mid];
                     a[mid]=a[low];
                     a[low]=temp;
     }
     int i=low+1,j=low+1,pivot=a[low];
     while(j<=high){
                   if(a[j]<pivot){
                                    temp=a[j];
                                    a[j]=a[i];
                                    a[i]=temp;
                                    i++;
                   }
                   j++;              
     }     
     i--;
     temp=pivot;
     a[low]=a[i];
     a[i]=temp;
     
     quick(low,i-1);
     quick(i+1,high);
}
int main(){
    int cntr=1,t,len,i,ans;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
          getline(cin,str);
          len=str.size();
          if(len==0){
                     getline(cin,str);
                     len=str.size();
          }
          memset(a,0,sizeof a);
          for(i=0;i<len;i++){
              if(str[i]>=97&&str[i]<=122)a[str[i]-97]++;
              else if(str[i]>=65&&str[i]<=90)a[str[i]-65]++;
          }
          quick(0,25);
          ans=0;
          for(i=25;i>=0;i--){
               if(a[i]==0)break;
               ans+=((i+1)*a[i]);
          }
          printf("Case #%d: %d\n",cntr++,ans);
    }
    return 0;
}
