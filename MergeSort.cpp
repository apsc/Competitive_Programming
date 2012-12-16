#include<stdio.h>

void mergeSort(int *p,int low,int high){
     if(low>=high)return;
     int mid;
     mid=(low+high)/2;
     mergeSort(p,low,mid);
     mergeSort(p,mid+1,high);
     merge(p,low,mid+1);
}
void merge(int *p,int low, int high){
     
}
int main(){
    int t;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++){
               scanf("%d",&arr[i]);
    }
    MergeSort(&arr[0],0,t);
    return 0;    
}
