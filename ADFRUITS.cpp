#include<stdio.h>
#include<cstring>
char f1[110],f2[110],a[110][110];
int b[110][110];
void print_LCS(int i,int j){
     if(i==0){
              for(int k=0;k<j;k++)printf("%c",f2[k]);
              return;
     }
     if(j==0){
              for(int k=0;k<i;k++)printf("%c",f1[k]);
              return;
     }
     if(a[i][j]=='D'){
                      print_LCS(i-1,j-1);
                      printf("%c",f1[i-1]);                 
     }
     else if(a[i][j]=='U'){
                      print_LCS(i-1,j);
                      printf("%c",f1[i-1]);                 
          
     }
     else{
                      print_LCS(i,j-1);
                      printf("%c",f2[j-1]);                 
          
     }
}
int main(){
    while(scanf("%s%s",&f1,&f2)!=EOF){
             int l1=strlen(f1),l2=strlen(f2);
             int max;
             for(int i=0;i<=110;i++){b[i][0]=0;b[0][i]=0;}
             for(int i=1;i<=l1;i++)
             for(int j=1;j<=l2;j++){
                     if(f1[i-1]==f2[j-1]){
                                      b[i][j]=b[i-1][j-1]+1;
                                      a[i][j]='D';
                     }
                     else if(b[i-1][j]>=b[i][j-1]){
                          b[i][j]=b[i-1][j];
                          a[i][j]='U';
                     }
                     else{
                          b[i][j]=b[i][j-1];
                          a[i][j]='L';
                     }
             }
             print_LCS(l1,l2);
             printf("\n");
    }
    return 0;
}
