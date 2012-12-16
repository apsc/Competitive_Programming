#include<stdio.h>
int at[1000000]={0};
int cntr=2;
int main(){
    int t;
    scanf("%d",&t);
    int n;
    
    while(t--){                  
               scanf("%d",&n);
               if(n<3){printf("1\n");continue;}
               if(n<5){printf("2\n");continue;}
               if(at[n]!=0){printf("%d\n",at[n]);continue;}
               int a[n+1];
               for(int i=2;i<=n;i++)a[i]=0;
               
               
               for(int i=cntr;i<=n;i++){
                       at[i]=i;
               }
               
               for(int i=2;i<=n;){
                       if(a[i]>0){
                                  if(i%6==1)i+=4;
                                  else if(i%6==5)i+=2;
                                  else i++;
                                  continue;
                       }
                       for(int j=i;j<=n;j+=i){                               
                               a[j]=i;
                               at[j]=(at[j]*(i-1))/i;
                       }
                       if(i%6==1)i+=4;
                       else if(i%6==5)i+=2;
                       else i++;
               }
               if(at[n]==n)
               printf("%d\n",at[n]-1);
               else
               printf("%d\n",at[n]);
               if(n>cntr)n=cntr;
    }
    
    return 0;    
}

