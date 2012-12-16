#include<stdio.h>
long long int m=1000000007;
int cntr=1;
long long int ans;
int main(){
    int t;
    scanf("%d",&t);
    for(;t>0;t--){
                  ans=0;
                  int n;              
                  scanf("%d",&n);
                  int a[n];
                  for(int i=0;i<n;i++){
                          scanf("%d",&a[i]); 
                  }
                  int b[3000]={0};
                  int pos=n/2+1;
                  while(pos!=1){
                                if(b[pos]==1)pos--;if(b[pos]==1){cntr*=2;continue;}
                                if(pos==1){if(a[1]>a[0]){
                                         ans+=((a[1]*cntr)%m);
                                         }else{
                                               ans+=((a[0]*cntr)%m);      
                                               }
                                               break;
                                }
                                ans+=((a[pos]*cntr)%m);
                                //printf("%d*%d\n",a[pos],cntr);
                                cntr*=2;
                                b[pos]=1;
                                n=pos+1;pos=n/2+1;
                  }
                  /*if(n==3){ans+=((a[2]*cntr)%m);cntr++;n--;}
                  if(n==2){if(a[1]>a[0]){
                                         ans+=((a[1]*cntr)%m);cntr++;
                                         }else{
                                               ans+=((a[0]*cntr)%m);cntr++;      
                                         }
                  }*/
                  printf("%lld\n",ans);
    }    
}
