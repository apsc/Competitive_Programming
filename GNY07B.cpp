#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int cntr=1;
int main(){
    int n;
    scanf("%d",&n);
    for(;n>0;n--){
             double d,temp;char c[3];
             scanf("%lf %s",&d,&c);
             printf("%d ",cntr);
             if(strcmp(c,"kg")==0){temp=d*2.2046;printf("%.4lf lb\n",temp);cntr++;continue;}
             if(strcmp(c,"lb")==0){temp=d*0.4536;printf("%.4lf kg\n",temp);cntr++;continue;}
             if(strcmp(c,"l")==0){temp=d*0.2642;printf("%.4lf g\n",temp);cntr++;continue;}
             if(strcmp(c,"g")==0){temp=d*3.7854;printf("%.4lf l\n",temp);cntr++;continue;}
    }
    return 0;    
}
