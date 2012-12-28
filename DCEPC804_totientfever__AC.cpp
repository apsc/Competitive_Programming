#include<stdio.h>
#define MAX 1000106
int ans[MAX];
int ans2[MAX];
int main(){
    int t,n;
    
    for(int i=2;i<MAX;i++){
            ans[i]=i;
    }
  //  int f=0;
    for(int i=2;i<MAX;i++){
            if(ans[i]==i){
            for(int j=i;j<MAX;j+=i){
                    ans[j]=(ans[j]/i)*(i-1);
                    
            }
            //ans2[ans[i]]=1;
             
             }
            
           
    }
     for(int i=2;i<MAX;i++)
             ans2[ans[i]]=1;
    
    int a,b,c,k;
  //  printf("%d\n",ans2[1000000]);
    scanf("%d",&t);
    while(t--){
               scanf("%d%d%d%d",&a,&b,&c,&k);
               //
               if(ans2[k]==1)printf("Yes\n");
               else printf("No\n");
    }
    
    return 0;
}
