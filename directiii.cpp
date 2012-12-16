#include<stdio.h>
void mergeSort(int arr[],int low, int high);
void merge(int arr[], int low, int mid, int high);
void lru(int N, int S, int A[1001], int cached_pages[51]){  
             int i=0;   
               //while(i<S){printf("%d",cached_pages[i]);i++;}
               mergeSort(cached_pages,0,S-1);
               
               
               while(i<S){
                          
                          printf("%d",cached_pages[i]);
                          if (i != S - 1) printf(" ");
                          else printf("\n");
                          i++;
               }
                          //printf("\n");
}
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
    int t,n,s,array[1010],b[1010],i,h[1010],cnt;
    scanf("%d",&t);
    while(t--){
               cnt=0;
               scanf("%d%d",&n,&s);
               //scanf("%d",&s);
               
               for(i=0;i<n;i++){scanf("%d",&array[i]);}
               for(i=0;i<=1009;i++){h[i]=0;b[i]=0;}
               for(i=0;i<n&&cnt<s;i++){
                                if(h[array[n-1-i]]==0){
                                                       b[cnt++]=array[n-1-i];
                                                       h[array[n-1-i]]=1;
                                                       //cnt++;
                                }
                                //if(cnt==s)break;
               }
               //for(i=0;i<s;i++)printf("%d\n",b[i]);
               //for(i=0;i<cnt;i++)b[i]=0;
               
               lru(n, s, array, b);
    }
    return 0;    
}
