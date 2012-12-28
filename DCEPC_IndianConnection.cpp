#include<stdio.h>
char a[100];
int main(){
    int t,n,k,top;
    char ans;
    scanf("%d",&t);
    while(t--){
               scanf("%d%d",&n,&k);
               top=1;
               k=k+(1<<(n))-1;
               while(k>0){
                          if(k&1){
                                  k=(k-1)/2;
                                  a[top++]='R';
                          }
                          else{
                                  k=k/2;
                                  a[top++]='L';                               
                          }                          
               }
               top--;
               
               ans='M';
               for(int i=top-1;i>0;i--){
                       if(a[i]=='L'&&ans=='M')ans='M';
                       else if(a[i]=='L'&&ans=='F')ans='F';
                       else if(a[i]=='R'&&ans=='M')ans='F';
                       else ans='M';
               }
               if(ans=='M')printf("Male\n");
               else if(ans=='F')printf("Female\n");
    }
    return 0;
    
}
