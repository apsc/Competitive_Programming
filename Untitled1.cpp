#include<stdio.h>
#include<iostream>
#include<cstring>
#define MAXIMUM 100
using namespace std;
int a[MAXIMUM][MAXIMUM]={0};
void printPatter(int n){
	//memset(a,0,n*n*sizeof(int));
    for(int i=0,j=-1,counter=1;counter<n*n;){
            while(j<n-1)
            {                 
              if(a[i][j+1])break;              
              a[i][++j]=counter++; 
            }
            while(i<n-1)
            {
              if(a[i+1][j]) 
                break;
              a[++i][j]=counter++;     
            }
            while(j>0){    
             if(a[i][j-1])        
               break;
             a[i][--j]=counter++;
           }     
           while(i>0)
           {
              if(a[i-1][j])      
                  break;     
              a[--i][j]=counter++;
           }
    }
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)printf("%d\t",a[i][j]);
            printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printPatter(n);
    scanf("%d");
    return 0;    
    
}
