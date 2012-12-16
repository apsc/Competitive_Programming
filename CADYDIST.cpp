#include<stdio.h>
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
long long int arr1[100000]={0};
long long int arr2[100000]={0};
int main(){
    long long int t;    
    scanf("%lld",&t);
    while(t>0){
                long long int i=0,j=0;
                             for(;i<t;i++){scanf("%lld",&arr1[i]);}
                             for(;j<t;j++){scanf("%lld",&arr2[j]);}                             
                             
                             mergeSort(arr1,0,t-1);
                             mergeSort(arr2,0,t-1);
                             long long int temp=0;
                             for(i=0;i<t;i++){
                                     temp+=arr1[i]*arr2[t-1-i];        
                             }
                             printf("%lld\n",temp);
                             scanf("%lld",&t);
    }
    return 0;    
}
