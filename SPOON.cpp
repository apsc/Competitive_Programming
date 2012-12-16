#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    outer:
    for(;t>0;t--){
                  int m,n;
                  scanf("%d%d",&m,&n);
                  char a[m][n];
                  int cntr;
                  for(int i=0;i<m;i++){
                          scanf("%s",&a[i]);        
                          
                          cntr=1;
                          for(int p=0;p<n;p++){
                                  int j=p;
                                  if(a[i][j]=='S'||a[i][j]=='s'){
                                                   if((a[i][++j]=='p' || a[i][j]=='P')&& j<n){
                                                                     if((a[i][++j]=='o' || a[i][j]=='O')&& j<n){
                                                                                          if((a[i][++j]=='o' || a[i][j]=='O')&& j<n){
                                                                                                               if((a[i][++j]=='n' || a[i][j]=='N')&& j<n){
                                                                                                                            printf("There is a spoon!\n");goto done;     
                                                                                                               }
                                                                                          }                     
                                                                     }                  
                                                   }
                                  }
                                  
                          }
                  }
                  for(int p=0;p<m;p++){
                          int i=p;
                          for(int j=0;j<n;j++){
                                  
                                  if(a[i][j]=='S'||a[i][j]=='s'){
                                                   if((a[++i][j]=='p' || a[i][j]=='P')&& i<m){
                                                                     if((a[++i][j]=='o' || a[i][j]=='O')&& i<m){
                                                                                          if((a[++i][j]=='o' || a[i][j]=='O')&& i<m){
                                                                                                               if((a[++i][j]=='n' || a[i][j]=='N')&& i<m){
                                                                                                                            printf("There is a spoon!\n");goto done;     
                                                                                                               }
                                                                                          }                     
                                                                     }                  
                                                   }
                                  }
                          }
                  }
                  
                  printf("There is indeed no spoon!\n");
                  done:;
    }
    return 0;    
}
