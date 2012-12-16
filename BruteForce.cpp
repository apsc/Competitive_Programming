#include<stdio.h>
#include<math.h>
int main(){
    int t,m,n,temp=0;
    scanf("%d",&t);
    while(t>0){
               int flag=0;
               
               scanf("%d",&n);
               scanf("%d",&m);
               
               
               int a[n];
               for(int i=0;i<n;i++){
                       scanf("%d",&a[i]);
               }
               for(int i=0;i<pow(2,n);i++)
               {
                       temp=0;
                       for(int j=0;j<n;j++){
                               if(i&1<<j)
                               temp+=a[j];
                       }
                       if(m==temp){flag=1;break;}
               }
               if(flag==1){printf("Yes");break;}
               else
               printf("No\n");              
               t--;
    }
    
    return 0;
}
