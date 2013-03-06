#include<cstdio>
using namespace std;
inline int min(int a,int b) {int i=(a>b?b:a);return i;}
int main(){
    int t,n,a[30][3],i;
    scanf("%d",&t);
    while(t--){
               scanf("%d",&n);
               for(i=0;i<n;i++){
                                scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
                                if(i>0){
                                        a[i][0]+=min(a[i-1][1],a[i-1][2]);
                                        a[i][1]+=min(a[i-1][0],a[i-1][2]);
                                        a[i][2]+=min(a[i-1][1],a[i-1][0]);
                                }
               }
               
               printf("%d\n",min(min(a[n-1][0],a[n-1][1]),min(a[n-1][1],a[n-1][2])));
    }
    
    return 0;
}
