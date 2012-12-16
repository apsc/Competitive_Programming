#include<stdio.h>
int a[10000];
int cntr=0;
int cnt=0;
void quick(int low,int high){
     if(low>=high)return;
     int temp;
     int mid=(low+high)/2;
     //if((a[low]>a[mid]&&a[low]<a[high])||(a[low]>a[high]&&a[low]<a[mid])){}
     
     
     /*if((a[high]>a[mid]&&a[high]<a[low])||(a[high]>a[low]&&a[high]<a[mid])){
                     temp=a[high];
                     a[high]=a[low];
                     a[low]=temp;
     }
     if((a[mid]>a[high]&&a[mid]<a[low])||(a[mid]>a[low]&&a[mid]<a[high])){
                     temp=a[mid];
                     a[mid]=a[low];
                     a[low]=temp;
     }*/
     temp=a[high];
     a[high]=a[low];
     a[low]=temp;
     cntr+=high-low-1;
     int i=low+1,j=low+1,pivot=a[low];;
     while(j<=high){
                   if(a[j]<pivot){
                                    temp=a[j];
                                    a[j]=a[i];
                                    a[i]=temp;
                                    i++;
                                    //cntr++;
                   }
                   j++;              
     }     
     i--;
     temp=pivot;
     a[low]=a[i];
     a[i]=temp;
     
     quick(low,i-1);
     quick(i+1,high);
}
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
            scanf("%d",&a[i]);        
    }
    quick(0,n-1);
    //for(int i=0;i<n;i++){
    //        printf("%d\n",a[i]);        
    //}
    printf("%d",cntr);
    return 0;
}
