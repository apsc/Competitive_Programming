#include<stdio.h>
int main(){
    int t,a,b,c[110],sum,temp,flag;
    scanf("%d",&t);
    while(t--){
               int i;flag=0;
               for(i=0;i<=109;i++)c[i]=0;
               sum=0;
               scanf("%d%d",&a,&b);
               i=a;
               while(a--){
                          scanf("%d",&temp);
                          c[temp]=1;
                          sum+=temp;
               }
               a=sum/b;
               a*=b;
               for(int i=a;i<sum;i++)if(c[sum-i]==1){flag=1;break;}
               if(flag)printf("%d\n",-1);
               else printf("%d\n",a/b);
    }    
    return 0;
}
