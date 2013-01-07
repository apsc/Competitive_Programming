#include<stdio.h>
#include<iostream>
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

int a[101];
int main(){
    int t,n;
    
    scanf("%d",&t);
    //t=10;
    while(t--){
               scanf("%d",&n);
               for(int i=0;i<n;i++){
                       scanf("%d",&a[i]);
               }
               if(n==1){printf("0\n");continue;}
               n--;
               //n=6;int a[]={25,50,40,38,10,95,80};
               mergeSort(a,0,n);
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
