#include<stdio.h>
int main(){
    int t,n;
    char s1[41][51],s2[41][3],s3[41][51];
    scanf("%d",&t);
    while(t--){
               scanf("%d",&n);
               for(int i=0;i<n;i++){
                       scanf("%s%s",&s1[i],&s2[i]);
                       gets(s3[i]);
               }
               printf("Begin on%s\n",s3[n-1]);
               for(int i=n-1;i>0;i--){
                       if(s1[i][0]=='L')printf("Right on%s\n",s3[i-1]);
                       else printf("Left on%s\n",s3[i-1]);
               }
               printf("\n");
    }
    
    return 0;    
}
