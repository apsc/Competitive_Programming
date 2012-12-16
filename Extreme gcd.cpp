#include<stdio.h>
#define N 2002
int G[N]={0};
int gcd(int i,int j){
    if(j==0)return i;
    else return gcd(j,i%j);    
}
int main(){
    for(int i=1;i<N;i++){
        for(int j=i+1;j<=N;j++)
        {
                  G[i]+=gcd(i,j);
        }
        
    }
    int n;
    while(scanf("%d",&n),n){
                            printf("%d\n",G[n]);                        
    }
    return 0;
}
