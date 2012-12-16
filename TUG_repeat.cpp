#include<stdio.h>

int pow(int a, int b){
    if (b==1) return a;
    if(b==0) return 1;
    int temp=pow(a,b/2);
    if(b&1)
    return temp*temp*a;
    return temp*temp;
}
int main(){
    int t;
    scanf("%d",&t);
    for(;t>0;t--){
                  int arr[100]={0};
                  int p=0;
                  long int n;              
                  scanf("%d",&n);
                  int a[n];
                  int b[101]={0};
                  for(int i=0;i<n;i++){
                          scanf("%d",&a[i]);     
                          b[(a[i])]++;
                  }
                  for(int i=0;i<101;i++){
                          if(b[i]&1==1){
                                        arr[p]=i;
                                        p++;            
                          }
                  }
                  //printf("%d\n",p);
                  float sum=0.00;
                  for(int i=0;i<p;i++){
                          //printf("%d\n",arr[i]);
                          sum+=arr[i];
                          
                  }
                  float temp=0;
                  int flag=0;
                  for(int i=0;i<pow(2,p);i++)
                  {
                          
                          for(int j=0;j<p;j++)
                          {
                                 if(i&1<<j==1){
                                               temp+=arr[j];
                                 }        
                          }
                          if(temp==sum/2)
                          {flag=1;break;}
                          
                  }
                  if(flag==0)
                  printf("NO\n");
                  else
                  printf("YES\n");
                  
                                    
    }
    return 0;
}
