#include<stdio.h>
#include<iostream>
using namespace std;
long long int q[1000],p[1000];
void merge(long long int [],int,int,int);
void mergeSort(long long int arr[],int low, int high){
     if(low>=high)return;
     int mid=(low+high)/2;
     mergeSort(arr,low,mid);
	 mergeSort(arr,mid+1,high);		
	 merge(arr,low,mid,high);
}
void merge(long long int arr[], int low, int mid, int high){
    long long int a[high-low+1];
    long long int qs[high-low+1];
    int i = low;
	int j = mid+1;
	int k = 0;
	while(i<=mid && j<=high){
		if(arr[i]>arr[j]){
			a[k]=arr[j];
			qs[k]=q[j];
			j++;
		}
		else if(arr[i]<arr[j]){
			a[k]=arr[i];
			qs[k]=q[i];
			i++;
		}else{             
             if(q[i]>q[j]){
                      a[k]=arr[j];
                      qs[k]=q[j]; 
                      j++;                      
             } 
             else if(q[i]<=q[j]){
                            a[k]=arr[i];
                      qs[k]=q[i];      
                      i++;    
             } 
                 
        }
		k++;
	}

		
		/**/
	while(i<=mid){
		a[k]=arr[i];
		qs[k]=q[i];
		k++;i++;
	}
	while(j<=high){
		a[k]=arr[j];
		qs[k]=q[j];
		k++;j++;
	}
    int u=0;
	for(int m=low;m<=high;m++,u++){
		arr[m]=a[u];
		q[m]=qs[u];
	}
}

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
               scanf("%d",&n);
               
               for(int i=0;i<n;i++)scanf("%lld",&p[i]);           
               for(int i=0;i<n;i++)scanf("%lld",&q[i]);               
               mergeSort(p,0,n-1);
               int max=-1;
               int qs[1000]={0};
               //for(int i=0;i<n;i++)printf("%d ",p[i]);printf("\n");
               //for(int i=0;i<n;i++)printf("%d ",q[i]);printf("\n"); 
               qs[0]=1;
               for(int i=1;i<n;i++){
                       int flag=0; 
                       for(int j=0;j<i;j++){   
                                                          
                               if(q[i]>=q[j]){                                                                                            
                                             max=qs[j]+1;
                                             if(max>qs[i])
                                             qs[i]=max;  
                                             flag++;        
                               }          
                               
                                                                                
                       }
                       if(flag==0)qs[i]=1; 
                        //printf("%d\n",qs[2]); 
                       
               }
               max=-1;
               for(int i=0;i<n;i++){
                       if(max<qs[i])max=qs[i];        
               }
               
               printf("%d\n",max);
    }
    return 0;    
}
