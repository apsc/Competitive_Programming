#include<stdio.h>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
    char str[2002];
    int left,right,cntr,t=1;
    while(1){
             left=0;right=0;cntr=0;
             scanf("%s",&str);
             if(str[0]=='-')break;
             int len=strlen(str);
             for(int i=0;i<len;i++){
                     if(str[i]=='{')left++;
                     else right++;
                     if(right>left){
                                    left++;
                                    right--;
                                    cntr++;
                     }
             }
             if(left>right)cntr+=(int)ceil((left-right-cntr)/2.0);
             //else if(right>left)cntr=(right-left)/2;
             printf("%d. %d\n",t,cntr);
             t++;                      
    }
    return 0;
}
