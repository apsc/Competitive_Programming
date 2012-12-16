import java.util.*;
import java.io.*;


class aman{
    static int cntr=0;
    static int pos=0;
    static void mergeSort(int arr[],int low, int high){
        if(low>=high)return;
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    static void merge(int arr[], int low, int mid, int high){
        int a[]=new int[high-low+1];
        int i = low;
        int j = mid+1;
        int k = 0;
        while(i<=mid && j<=high){
            if(arr[i]>arr[j]){
                a[k]=arr[j];
                cntr+=mid-i+1;
                j++;
            } else{
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
    
    public static void main(String args[]) throws java.lang.Exception{
        Scanner sc=new Scanner(System.in);
	BufferedReader reader;
	 reader = new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(reader.readLine());
        for(;t>0;t--){
		String v=reader.readLine();
            int n=Integer.parseInt(v);

            String b=reader.readLine();
            String a=reader.readLine();
            int weighta[]=new int[n];

            HashMap<String,Integer> hm=new HashMap<String,Integer>();
            StringTokenizer st=new StringTokenizer(b);
            while(st.hasMoreTokens()){
                String temp=st.nextToken();
                hm.put(temp,pos);
                pos++;
            }
            int i=0;
            StringTokenizer st2=new StringTokenizer(a);
            while(st2.hasMoreTokens()){
                String temp=st2.nextToken();
                weighta[i]=(Integer)hm.get(temp);
		//System.out.println(weighta[i]);
		i++;
            }
	
            pos=0;
            mergeSort(weighta,0,n-1);
            System.out.println(cntr);
            cntr=0;
            
            
        }
        
        
        
    }
}