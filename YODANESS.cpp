#include<stdio.h>
//#include<conio.h>
#include<string.h>
int cntr=0;
void merge(int arr[], int low, int mid, int high);
void mergeSort(int arr[],int low, int high){
     if(low>=high)return;
     int mid=(low+high)/2;
     mergeSort(arr,low,mid);
	 mergeSort(arr,mid+1,high);		
	 merge(arr,low,mid,high);
}
void merge(int arr[], int low, int mid, int high){
    long long int a[high-low+1];
    int i = low;
	int j = mid+1;
	int k = 0;
	while(i<=mid && j<=high){
		if(arr[i]>arr[j]){
			a[k]=arr[j];
			cntr+=mid-i+1;
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

int pos=0;

int main(){
    long int t;
    scanf("%d",&t);
    for(;t>0;t--){
                  int n;
                  scanf("%d",&n);
                  char a[n][20];
                  char b[n][20];
                  for(int i=0;i<n;i++)
                  {
                   scanf("%s",&b[i]);        
                  }
                  for(int i=0;i<n;i++)
                  {
                   scanf("%s",&a[i]);        
                  }
                  
                  
                  int weightb[n];
                  for(int i=0;i<n;i++)
                  weightb[i]=i;
                  int weighta[n];
                  int i=0;
                  while(i<n)
                  {
                           
                            int j=0;
                           
                            
                            for(int w=0;w<n;w++){
                                    if(strcmp(b[i],a[w])==0 ){
                                            weighta[pos]=w;
                                            //printf("%d",weighta[pos]);
                                            //getch();
                                            pos++;
                                            break;
                                            
                                            //else temp+=pos-w; 
                                              
                                    }
                                    
                                   //pos=0;        
                            }                
                            i++;          
                  }
                  
                  pos=0;
                  mergeSort(weighta,0,n-1);
                  printf("%d\n",cntr);
                  cntr=0;
                  
                  
    }
    
    
    return 0;    
}
