#include <stdio.h>
#define MAX 100009
int main()
{
	int t,n,i,a[MAX],b[MAX],flag;
	scanf("%d",&t);
	while(t--){
		flag=0;
        scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);			
		}
		for(i=0;i<n;i++){
            int index=a[a[i]-1]-1;
            b[index]=a[i];
        }
        for(i=0;i<n;i++)if(a[i]!=b[i]){flag=1;break;}
		if(flag)printf("not inverse\n");
		else printf("inverse\n");
	}
    return 0;
}
