#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int binSearch(int A[], int T[], int l, int r, int key) {
   int m;
 
   while( r - l > 1 ) {
      m = l + (r - l)/2;
      if( A[T[m]] >= key )
         r = m;
      else
         l = m;
   }
 
   return r;
}

int LIS(int a[],int n){
     int *tailIndex=new int[n];
     int *prevIndex=new int[n];
     
     memset(tailIndex,0,sizeof(int)*n);
     memset(prevIndex,0xFF,sizeof(int)*n);
     
     tailIndex[0]=0;
     prevIndex[0]=-1;
     int curr=1;
     
     for(int i=1;i<n;i++){
             if( a[i] < a[tailIndex[0]] ) {
                tailIndex[0] = i;      
             }
             else if(a[i]>a[tailIndex[curr-1]]){
                    prevIndex[i]=tailIndex[curr-1];
                    tailIndex[curr++]=i;
             }
             else{
                    int pos=binSearch(a,tailIndex,-1,curr-1,a[i]);
                    prevIndex[i]=tailIndex[pos-1];
                    tailIndex[pos]=i;
             }
     }
     cout<<"LIS is: "<<endl;
     for(int i=tailIndex[curr-1];i>=0;i=prevIndex[i]){
            cout<<a[i]<<"    ";
     }
     cout<<endl;
     delete []tailIndex;
     delete []prevIndex;
     return curr;
     
}
int main(){
    int n=7;
    int a[]={ 2, 5, 3,7, 1,2,11 };
    cout<<"Length of LIS: "<<LIS(a,n)<<endl;
    system("pause");
    return 0;
}
