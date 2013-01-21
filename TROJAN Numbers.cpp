#include<stdio.h>
#include<math.h>
#include<cstring>
# define MAX 10000007
int a[MAX];
int b[MAX];
int main(){
    int i,t,n,j;
    for(i=2;i*i<MAX;i++){
         if(a[i])continue;
         for(j=i*i;j<MAX;j+=i){
              a[j]=i;                      
         }
    }
    scanf("%d",&t);
    while(t--){
               
               memset(b,0,sizeof b);
               scanf("%d",&n);
               if(((int)sqrt(n))*((int)sqrt(n))==n){printf("NO\n");continue;}
               int temp=n;
               int ans=0;
               int flag=0;
               int balance=0;
               
               while(temp>0){
                        if(a[temp]==0){
                                       if(b[temp]==1){balance--;}
                                       break;
                        }
                        if(b[a[temp]]==0){balance++;
                                          
                                          b[a[temp]]++;
                        }
                        else if(b[a[temp]]==1){balance--;
                             b[a[temp]]++;
                        }
                        
                        temp/=a[temp];
                        
               }
               if(balance==0)printf("YES\n");
               else printf("NO\n");
    }
    
    return 0;
}
