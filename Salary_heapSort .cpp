#include<stdio.h>
#include<iostream>
int a[101];
void heapify(int n){
               int i=(n-1)/2;               
               bool heap;
               while(i>=0){                           
                   int j=2*i+1;
                   heap=false;
                   while(!heap&&j<=n){                                     
                       if(j+1<=n&&a[j+1]>a[j])j++;
                       if(a[j]>a[(j-1)/2]){
                                          // printf("%d and %d\n",a[j],a[(j-1)/2]);
                                          int t=a[j];
                                          a[j]=a[(j-1)/2];
                                          a[(j-1)/2]=t;
                                          j=2*j+1;
                                          
                       }else heap=true;
                   }
                   i--;
               }
               
}

int main(){
    int t,n;
    
    scanf("%d",&t);
    //t=10;
    while(t--){
               scanf("%d",&n);
               
               //n=100;
               for(int i=0;i<n;i++){
                       scanf("%d",&a[i]);
                       //a[i]=i+10;
               }
               if(n==1){printf("0\n");continue;}
               n--;
               //n=6;int a[]={25,50,40,38,10,95,80};
               for(int i=0;i<n;i++){
                       heapify(n-i);
                       int t=a[0];
                       a[0]=a[n-i];
                       a[n-i]=t;
               }
               //for(int i=0;i<=n;i++)printf("%d",a[i]);
               bool flag=false;
               for(int i=0;i<n;i++){
                       if(a[i]!=a[i+1])break;
                       if(i==n-1)flag=true;
               }
               int cntr=0;
               while(!flag){
                           for(int i=0;i<n;i++)a[i]++;
                           //scanf("%d");
                           cntr++;
                           int temp=a[n];
                           int i=n;
                           for(;temp<a[i-1];i--)a[i]=a[i-1];
                           a[i]=temp;
                           //for(int i=0;i<=n;i++)printf("%d",a[i]);
                           //printf("\n");
                           
                           for(int i=0;i<n;i++){
                                  if(a[i]!=a[i+1])break;
                                  if(i==n-1)flag=true;
                           }

               }
               printf("%d\n",cntr);
    }
    
    return 0;
}
