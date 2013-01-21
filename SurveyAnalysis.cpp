#include<stdio.h>
#include<cstring>
#include<cmath>
using namespace std;
char str[1000009];
int main(){
    int i,j,cntr,a[10];
    double mean=0.0,variance;
    for(i=0;i<7;i++){
          scanf("%s",&str);
          cntr=0;
          j=strlen(str)-1;
          for(;j>=0;j--)
          if(str[j]=='1')cntr++;
          a[i]=cntr;
          mean+=cntr;
    }
    
    mean/=7.0;
    for(i=0;i<7;i++){
                     variance+=(a[i]-mean)*(a[i]-mean);
    }
    variance/=7;
    printf("%.4lf\n",sqrt(variance));
    return 0;    
}
