#include <cstdio>
#include<cmath>
#define max 4000
using namespace std;
int arr[max]={0};
int a[1000]={0};
int cntr=0;
void sieve(){
        int i,j;
        
        for(i=2;i<(max);++i)
      {         
             if(arr[i]>0)continue;
             
             for(j=2*i;j<max;j+=i){
                     arr[j]++;                     
                     if(arr[j]>=3){                                   
                                   a[cntr]=j;
                                   cntr++;              
                     }
             }
            
      }
}
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

int main() {

   int  t;
   sieve();
   mergeSort(a,0,cntr-1);
    long int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld",&n);
        printf("%d\n",a[n-1]);    
    }
return 0;
}
