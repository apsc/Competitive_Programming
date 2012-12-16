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
    int t;
    scanf("%d",&t);
    for(;t>0;t--){
        long long int n,m,d;
        scanf("%lld %lld %lld",&n,&m,&d);
        long long int arr[n];
        for(int i=0;i<n;i++){
                scanf("%lld",&arr[i]);       
        }
        //mergeSort(arr, 0, n-1);
        again:
        for(int i=0;i<n && m!=0;i++){
                         if(arr[i]>d){
                                        arr[i]-=d;
                                        m--;
                                        goto again;        
                         }
        }
        if(m==0)printf("YES\n");
        else printf("NO\n");
    }
}
