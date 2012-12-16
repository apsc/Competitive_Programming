#include<stdio.h>
#include<map>
using namespace std;
map<int,int> m;
int a[10000000];
int main(){
    int t=9;
    for(int i=0;i<100000;i++){
            scanf("%d",&a[i]);
            m[a[i]]=1;
    }
    while(t--){               
               int flag=0,n;
               scanf("%d",&n);
               for(int i=0;i<=n;i++){
                                     if(m[a[i]]==1&&m[n-a[i]]){flag=1;break;}
               }
               if(flag)printf("yesyes");
               else printf("nonono");
               
    }
    return 0;    
}
