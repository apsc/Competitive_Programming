#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int n,cntr=0,num=1;
    scanf("%d",&n);
    cntr+=n;
    while(n-->0){
               cntr+=num*n;
               num++;
    }
    printf("%d",cntr);
    return 0;
}
