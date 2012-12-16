#include<stdio.h>
#include<iostream>
#include<cmath>
//#include<conio.h>
using namespace std;
void merge(long long int [],int,int,int);
void mergeSort(long long int arr[],int low, int high){
     if(low>=high)return;
     int mid=(low+high)/2;
     mergeSort(arr,low,mid);
	 mergeSort(arr,mid+1,high);		
	 merge(arr,low,mid,high);
}
void merge(long long int arr[], int low, int mid, int high){
    int a[high-low+1];
    int i = low;
	int j = mid+1;
	int k = 0;
	while(i<=mid && j<=high){
		if(arr[i]>arr[j]){
			a[k]=arr[j];
			j++;
		}
		else{
			a[k]=arr[i];
			i++;
		}
		k++;
	}
	while(i<=mid){
		a[k]=arr[i];
		k++;i++;
	}
	while(j<=high){
		a[k]=arr[j];
		k++;j++;
	}
    int p=0;
	for(int m=low;m<=high;m++,p++){
		arr[m]=a[p];
	}
}

long long int arr[10000007];

int main(){
    long long int t;
    scanf("%lld",&t);
    for(;t>0;t--){
    
        long long int n;
        scanf("%lld",&n);
        char b[1000000]; 
        //int arr2[n];
        for(long int i=0;i<n;i++){
                
                scanf("%s %lld",&b,&arr[i]);
                //arr2[i]=i+1;
        }
        
       
        mergeSort(arr, 0, n-1);
        
        long long int sum=0;
        for(long long int i=0;i<n;i++){
             sum=sum+(long)fabs(arr[i]-(i+1));
        }
        printf("%lld\n",sum);
        //getch();
    }
    return 0;    
  
}
