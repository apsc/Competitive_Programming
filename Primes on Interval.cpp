#include<cstdio>
#include<cstring>
#define max 72000
int cnt=0;
int arr[100000009]={0};
using namespace std;
bool *p=new bool[100000000];
void sieve(){
        int i,j;
        memset(p,true,(sizeof(bool)*max));
        for(i=2;i<(max);++i)
      {
         if(p[i]){
             for(j=i*i;j<1000000;j+=i)
                     p[j]=false;
             cnt++;
             
         }
         arr[i]=cnt;
         
      }
}

int main(){
    sieve();
    int a,b,k,l,x,cnt=0,flag;
    while(1){scanf("%d%d%d",&a,&b,&k);flag=0;
    for(l=1;l<=b-a+1;l++){
            for(x=a;x<=b-l+1;x++){
                  cnt=arr[x+l-1]-arr[x];
                  if(cnt>=k){flag=1;break;}
                  
                  if(flag)break;
            }
            if(flag)break;
    }
    if(flag)printf("%d",l);
    else printf("-1");
    }
    return 0;    
}
