#include<cstdio>
#include<vector>
using namespace std;

#define maxd 1000001
#define maxa 1000001
#define lim 1001

vector<int> d(1000002,1);

int main()
{
	int t,n,i,j,k;
	char s[20];
	for(i=2;i<maxd;++i) d[i]+=i;
	for(i=2;i<lim;++i)
	{
		j=i*i;
		d[j]+=i;
		k=i+i;
		j+=i,++k;
		for(;j<maxd;j+=i,++k) d[j]+=k;
	}
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",d[n]);
	}
	return 0;
}
