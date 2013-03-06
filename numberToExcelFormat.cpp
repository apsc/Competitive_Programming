#include<stdio.h>
int main(){
    int n,a[100],cntr=0;
    cin>>n;
    a[0]=--n;
    do{
               a[cntr]=a[cntr]%26+65;
               n/=26;
               a[++cntr]=n-1;
    }while(n>0);
    for(int i=cntr-1;i>=0;i--){
            printf("%c",a[i]);
    }
    system("pause");
    return 0;
}
