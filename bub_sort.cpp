#include <iostream.h>
#include <conio.h>
int main(){
    int a[]={5,6,4,3,1},temp;
    for(int i=0;i<4;i++)
    {
            for(int j=0;j<=3-i;j++){
                    if(a[j]>a[j+1])
                    {
                                   temp=a[j];
                                   a[j]=a[j+1];
                                   a[j+1]=temp;               
                    }
            }
             
    }
    for(int i=0;i<5;i++)
            cout<<a[i]<<endl;       
    getch();
    return 0;
}
