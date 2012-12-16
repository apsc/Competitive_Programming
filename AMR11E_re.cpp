#include<stdio.h>
#include<iostream>
using namespace std;
int a[501][501];
int b[501][501];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
               int m,n;
               scanf("%d%d",&m,&n);               
               for(int i=0;i<m;i++){
                       for(int j=0;j<n;j++){
                               scanf("%d",&a[i][j]);
                       }
                       
               }
               if(m==1){
                        int sum=0,min=1000;
                        for(int i=0;i<n;i++){
                                sum+=a[0][i];
                                if(sum<min)min=sum;
                        }        
                        if(min>0)printf("1\n");
                        else printf("%d\n",1-min);
                        continue;
               }
               m--;n--;
               b[m][n]=0;
               for(int i=m-1;i>=0;i--){
                       b[i][n]=b[i+1][n]+a[i][n];
               }
               for(int i=n-1;i>=0;i--){
                       b[m][i]=b[m][i+1]+a[m][i];
               }
                              
               
               for(int i=m-1,j=n-1;i>=0||j>=0;i--,j--){                               
                       b[i][j]=a[i][j]+max(b[i+1][j],b[i][j+1]);
                       for(int k=i-1;k>=0;k--){
                               b[k][j]=a[k][j]+max(b[k+1][j],b[k][j+1]);     
                       }
                       for(int l=j-1;l>=0;l--){
                               b[i][l]=a[i][l]+max(b[i+1][l],b[i][l+1]);
                       }               
               }
               
               /*m++;n++;
               
               printf("\n");
               for(int i=0;i<m;i++){
                       for(int j=0;j<n;j++){
                               printf("%d\t",b[i][j]);     
                       }
                       printf("\n");
               }*/
               if(b[0][0]>0)printf("1\n");
               else 
               printf("%d\n",1-b[0][0]);
               
    }
    return 0;
}
