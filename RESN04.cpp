#include<stdio.h>
void merge(int [],int,int,int);
void mergeSort(int arr[],int low, int high){
     if(low>=high)return;
     int mid=(low+high)/2;
     mergeSort(arr,low,mid);
	 mergeSort(arr,mid+1,high);		
	 merge(arr,low,mid,high);
}
void merge(int arr[], int low, int mid, int high){
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
    for(t;t>0;t--){
                   int n;
                   scanf("%d",&n);
                   int a[n];
                   for(int i=0;i<n;i++){
                           scanf("%d",&a[i]);
                   }
                   mergeSort(a,0,n-1);
                   int flag=0;
                   int amt=1;
                   for(int i=0;i<n;i++){
                             if(a[i]>amt){
                                        a[i]=a[i]-amt;
                                        flag++;
                                        amt++;          
                             }      
                             
                   }
                   if(amt%2==1){printf("ALICE\n");continue;}
                   if(amt%2==0){printf("BOB\n");continue;}
    }
    return 0;    
}
