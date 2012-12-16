#include<stdio.h>
int pow(int a, int b){
    if (b==1) return a;
    if(b==0) return 1;
    int temp=pow(a,b/2);
    if(b&1)
    return temp*temp*a;
    return temp*temp;
}
int b[100]={0};
int p=1;
void push(int q){
     b[p]=q;
     p++;     
}
int main(){
    int t;
    int arr[100]={0};
    int temp=0;
    scanf("%d",&t);
    for(;t>0;t--){
                  long int n;
                  int flag=0;
                  int sum=0;
                  scanf("%ld",&n);
                  int a[n];
                  for(int i=0;i<n;i++){
                          scanf("%d",&a[i]);
                          arr[(a[i])]++;
                  }
                  
                  for(int i=0;i<100;i++){
                          if(arr[i]&1==1)
                          push(i);                                  
                  }
                  int cntr=0;
                  for(int i=1;i<100&&b[i]!=0;i++){
                          cntr++;
                          sum+=b[i];
                  }
                  for(int i=0;i<pow(2,cntr);i++){
                       temp=0;
                       flag=0;
                       p=1;
                       for(int j=0;j<n;j++){
                               if(i&1<<j){
                                          temp+=b[p];
                                          p++;
                               }
                       }
                       if(temp==sum/2&&sum%2==0){
                                       flag=1;
                                       break;                
                       }
                  }
                  if(flag==1){
                        printf("YES\n");
                                 
                  }else if(flag==0)
                   printf("NO\n");
                  
    }    
    return 0;
}
