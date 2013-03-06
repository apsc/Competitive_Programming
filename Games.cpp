#include<cstdio>
using namespace std;
int main(){
    int t,a[31][31],i=0,cntr=0;;
    scanf("%d",&t);
    while(i<t){
               scanf("%d%d",&a[i++][0],&a[i][1]);
    }
    for(int i=0;i<t;i++){
            for(int j=i+1;j<t;j++){
                    if(a[i][0]==a[j][1])cntr++;
                    if(a[i][1]==a[j][0])cntr++;
            }
    }
    printf("%d",cntr);
    return 0;
}
