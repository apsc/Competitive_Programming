#include<stdio.h>
//int at[1000000]={0};
//int cntr=2;
int main(){
    int t;
    scanf("%d",&t);
    int n;
    
    while(t--){                  
               scanf("%d",&n);
               //if(n<3){printf("1\n");continue;}
               //if(n<5){printf("2\n");continue;}
               //if(at[n]!=0){printf("%d\n",at[n]);continue;}
               //int a[n+1];
               //for(int i=2;i<=n;i++)a[i]=0;
               
               
               //for(int i=cntr;i<=n;i++){
               //        at[i]=i;
               //}
               
              int result = n; 
               for(int i=2;i*i <= n;i++) 
               { 
                       if (n % i == 0) result -= result / i; 
                       while (n % i == 0) n /= i; 
               } 
               if (n > 1) result -= result / n;
               printf("%d\n",result); 
    }
    
    return 0;    
}

