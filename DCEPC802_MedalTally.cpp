#include<stdio.h>
int gold[1010]={0},silver[1010]={0},bronze[1010]={0},index[1010]={0};
void merge(int,int,int);
void mergeSort(int low, int high){
     if(low>=high)return;
     int mid=(low+high)/2;
     mergeSort(low,mid);
	 mergeSort(mid+1,high);		
	 merge(low,mid,high);
}
void merge(int low, int mid, int high){
    int a[high-low+1],b[high-low+1],c[high-low+1],d[high-low+1];
    int i = low;
	int j = mid+1;
	int k = 0;
	while(i<=mid && j<=high){
		if(gold[i]==gold[j]){
            if(silver[i]>silver[j]){
                                    d[k]=index[j];
                                    a[k]=gold[j];
			                        b[k]=silver[j];
			                        c[k]=bronze[j];
			                        j++;
            }
            else if(silver[i]<silver[j]){
                 d[k]=index[i];
                 a[k]=gold[i];
                 b[k]=silver[i];
			     c[k]=bronze[i];			
			     i++;
            }
            else{
                 if(bronze[i]>bronze[j]){
                                         d[k]=index[j];
                                        a[k]=gold[j];
    			                        b[k]=silver[j];
    			                        c[k]=bronze[j];
    			                        j++;
                }
                else if(bronze[i]<bronze[j]){
                     d[k]=index[i];
                     a[k]=gold[i];
                     b[k]=silver[i];
    			     c[k]=bronze[i];			
    			     i++;
                }
                else{
                     if(index[i]<index[j])  {
                                            d[k]=index[j];
                                        a[k]=gold[j];
    			                        b[k]=silver[j];
    			                        c[k]=bronze[j];
    			                        j++;                       
                     }   
                     else{
                               d[k]=index[i];
                     a[k]=gold[i];
                     b[k]=silver[i];
    			     c[k]=bronze[i];			
    			     i++;
                     }
                }
            }
        }
        else if(gold[i]>gold[j]){
             d[k]=index[j];
			a[k]=gold[j];
			b[k]=silver[j];
			c[k]=bronze[j];
			j++;
		}
		else{
             d[k]=index[i];
			a[k]=gold[i];
            b[k]=silver[i];
			c[k]=bronze[i];			
			i++;
		}
		k++;
	}
	while(i<=mid){
                  d[k]=index[i];
		a[k]=gold[i];
		b[k]=silver[i];
		c[k]=bronze[i];
			
		k++;i++;
	}
	while(j<=high){
                   d[k]=index[j];
		a[k]=gold[j];
		b[k]=silver[j];
		c[k]=bronze[j];
			
		k++;j++;
	}
    int p=0;
	for(int m=low;m<=high;m++,p++){
		gold[m]=a[p];
		silver[m]=b[p];
		bronze[m]=c[p];
		index[m]=d[p];
			
	}
}
int main(){
    int m,n,c;
    char medal;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++){
            index[i]=i+1;
            //printf("hello");
            scanf("%d %c",&c,&medal);
            switch(medal){
                          case 'G':gold[c-1]++;
                               break;
                          case 'S':silver[c-1]++;
                               break;
                          case 'B':bronze[c-1]++;            
            }
    }
    //for(int i=0;i<n;i++)printf("%d\t",index[i]);
    mergeSort(0,n-1);
    //for(int i=0;i<n;i++)printf("%d\t",index[i]);
    printf("Country Gold Silver Bronze Total\n");
    for(int i=n-1;i>=0;i--){
            if(!(gold[i]==0&&silver[i]==0&&bronze[i]==0))
            printf("%d %d %d %d %d\n",index[i],gold[i],silver[i],bronze[i],gold[i]+silver[i]+bronze[i]);        
    }
    return 0;    
}
