#include<stdio.h>
//#include<conio.h>
long long int cntr=0;
long long int cnt=0;
int arr[1000006];
void merge(int,int,int);
void mergeSort(int low, int high){
     if(low>=high)return;
     int mid=(low+high)/2;
     mergeSort(low,mid);
	 mergeSort(mid+1,high);		
	 merge(low,mid,high);
}
void merge(int low, int mid, int high){
    long long int a[high-low+1];
    int i = low;
	int j = mid+1;
	int k = 0;
	cnt=0;
	while(i<=mid && j<=high){
		if(arr[i]<arr[j]){
            a[k]=arr[i];			
			cnt+=arr[i];
			i++;
		}
		else{
			a[k]=arr[j];
			cntr+=cnt;                                       
			j++;
        }
		k++;
	}	
	while(j<=high){
        a[k]=arr[j];
        cntr+=cnt;
        k++;j++;
	}    
	while(i<=mid){
		a[k]=arr[i];
		k++;i++;
	}
	int p=0;
	for(int m=low;m<=high;m++,p++){
		arr[m]=a[p];
	}
}
int main(){
    int t;long long int n;
    scanf("%d",&t);
    for(;t>0;t--){
            cntr=0;            
            scanf("%lld",&n);
            
            for(int i=0;i<n;i++){
                    scanf("%lld",&arr[i]);       
            }
//            int temp=arr[0];
            mergeSort(0, n-1);        
            printf("%lld\n",cntr);   
    }
    //getch();
    return 0;    
  
}
