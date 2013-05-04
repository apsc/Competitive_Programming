#include<stdio.h>
#include<iostream>
void heapify(int a[],int n){
               int i=(n-1)/2;               
               bool heap;
               while(i>=0){                           
                   int j=2*i+1;
                   heap=false;
                   while(!heap&&j<=n){                                     
                       if(j+1<=n&&a[j+1]>a[j])j++;
                       if(a[j]>a[(j-1)/2]){
                                           //printf("%d and %d\n",a[j],a[(j-1)/2]);
                                          int t=a[j];
                                          a[j]=a[(j-1)/2];
                                          a[(j-1)/2]=t;
                                          j=2*j+1;
                                          
                       }else heap=true;
                   }
                   i--;
               }
               
}
int a[101];
int main(){
    int t,n;
    
    scanf("%d",&t);
    //t=10;
    while(t--){
               scanf("%d",&n);
               for(int i=0;i<n;i++){
                       scanf("%d",&a[i]);
               }
               n--;
               //n=6;int a[]={25,50,40,38,10,95,80};
               for(int i=0;i<=n;i++){
                       heapify(a,n-i);
                       int t=a[0];
                       a[0]=a[n-i];
                       a[n-i]=t;
               }
               for(int k=0;k<=n;k++)printf("%d\n",a[k]);
    }
    
    return 0;
}
