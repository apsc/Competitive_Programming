#include<stdio.h>
int arr[900]={0};
char p[1000000];
int i=0,j=0;
int b[9];
int main(){
    int t,temp=0;
    long long int n;
    scanf("%d",&t);
    
    while(t--){
               int flag=0;
               scanf("%lld",&n);
               
               if(n>=10){getchar();gets(p);printf("YES\n");continue;}
               
               for(i=0;i<n;i++)scanf("%d",&b[i]);
                              
               for(i=0;i<(1<<n);i++){
                       temp=0;
                       
                       for(j=0;j<n;j++){
                               if(i&(1<<j))temp+=b[j];                                          
                       }
                       
                       arr[temp]+=1;
                       if(arr[temp]>1){printf("YES\n");flag=1;break;}
               }               
               if(flag==0)
               printf("NO\n");
               for(int i=0;i<=864;i++)arr[i]=0;
    }                                
               
    return 0;
}
