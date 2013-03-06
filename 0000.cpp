#include<stdio.h>
#include<iostream>
using namespace std;
void swap(int *a,int *b){
     *a=*a^*b;
     *b=*a^*b;
     *a=*a^*b;
}
void MatrixInplaceTranspose(int a[10][10],int r,int c){
     for(int i=0;i<c;i++){
             for(int j=0;j<i;j++)swap(&a[i][j],&a[j][i]);
     }
}
int main(void)
{
    int r = 2, c = 3;
    int size = r*c;
    int a[10][10];
    
    for(int i=0;i<r;i++){
             for(int j=0;j<c;j++)a[i][j]=i+j;
     }
    
    for(int i=0;i<r;i++){
             for(int j=0;j<c;j++)cout<<a[i][j]<<"    ";
             cout<<endl;
     }
    MatrixInplaceTranspose(a, r, c);
    swap(&r,&c); 
    cout<<endl<<endl;
    for(int i=0;i<r;i++){
             for(int j=0;j<c;j++)cout<<a[i][j]<<"    ";
             cout<<endl;
     }
    //delete[][] a;
    system("pause"); 
    return 0;
}
