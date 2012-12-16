#include<stdio.h>
//#include<conio.h>

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
int main(){
    long int t;
    scanf("%ld",&t);
    for(;t>0;t--){
                 long int n,k;
                  
                  scanf("%ld %ld",&n,&k);
                  long long int arr[n];
                  for(int i=0;i<n;i++){
                          scanf("%lld",&arr[i]);       
                  }
                  mergeSort(arr, 0, n-1);
                  
                  long long temp=1000000000;
                  for(int i=0;i+k-1<n;i++){
                             if(arr[i+k-1]-arr[i]<temp)
                             temp=arr[i+k-1]-arr[i];
                                                      
                  }
                  printf("%lld\n",temp);
                                
    }    
    return 0;
}
