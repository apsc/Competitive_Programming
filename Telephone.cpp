#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
    string a;
    string arr[100];
    scanf("%s",&a);
    int i=0;
    while(a.compare("000000")!=0){
                                  arr[i]=a;
                                  i++;
                                  scanf("%s",&a);                                                            
    }
    return 0;    
}
