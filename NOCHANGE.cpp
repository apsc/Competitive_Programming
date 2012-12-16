#include<stdio.h>
int m[10000007]={0};
int main(){
    int p,n,a[50];
    scanf("%d%d",&p,&n);
    for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(i)a[i]+=a[i-1];        
            m[a[i]]=1;
    }
    
    int flag=0,i=0;
    while(i<p){
             if(m[i]==0){i++;continue;}
             if(i==p){flag==1;break;}
             for(int j=0;j<n;j++){
                              if(i+a[j]==p){flag=1;break;}                            
                              m[i+a[j]]=1;
             }
             if(flag)break;
             i++;
    }
    
    if(flag)printf("YES");
    else printf("NO");    
    //getchar();
    //getchar();
    return 0;
}
