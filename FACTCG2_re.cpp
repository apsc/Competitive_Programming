#include<stdio.h>
#define max 10000001
int a[max]={0};
int main(){
    int n;
    seive:
                              for(int i=2;i*i<=max;){
                                       if(a[i]!=0)continue;
                                       for(int j=i;j<=max;j+=i){
                                               a[j]=i;        
                                       }
                                       if(i%6==1)i+=4;
                                       else if(i%6==5)i+=2;
                                       else i++;
                               }
    while(scanf("%d",&n)!=EOF){
                               if(n==1){printf("%d\n",n);continue;}
                               else if(n==2){printf("1x2\n");continue;}
                               else if(n==3){printf("1x3\n");continue;}
                               else printf("1");
                               while(1){
                                        if(n%a[n]==0){printf("x%d",a[n]);n/=a[n];if(n==1){printf("\n");break;}}
                                        //if(n>=5 && a[n]==0){printf("x%d\n",n);break;}         
                               }
                               
                               //for(int i=0;i<n+1;i++)a[i]=0;
                               
                                  
    }
    return 0;    
}
