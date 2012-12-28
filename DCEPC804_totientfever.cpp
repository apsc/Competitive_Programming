#include<stdio.h>
#define MAX 3000006
int ans[MAX];
int ans2[MAX]={0};
int main(){
    int t,n;
    
    for(int i=2;i<MAX;i++){
            ans[i]=i;
    }
    int f=0;
    for(int i=2;i<MAX;){
            if(ans[i]==i){
                for(int j=i;j<MAX;j+=i){
                        ans[j]=(ans[j]*(i-1))/i;
                
                }             
             }
             ans2[ans[i]]=1;
             if(i>4)
            {
                    if(f){i+=2;f=1;}
                    else{i+=4;f=0;}
            }
            else i++;
           
    }
    int a,b,c,k;
    //printf("%d\n",ans[48356275]);
    scanf("%d",&t);
    while(t--){
               scanf("%d%d%d%d",&a,&b,&c,&k);
               //
               if(ans2[k]!=0||k==0)printf("Yes\n");
               else printf("No\n");
    }
    
    return 0;
}
