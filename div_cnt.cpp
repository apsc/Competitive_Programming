#include<cstdio>
#include<vector>
using namespace std;

#define maxd 1000001
#define maxa 1000001
#define lim 1001

vector<int> d(1000002,2);

int main()
{
	int t,n,i,j,k;
	char s[20];

	for(i=2;i<lim;++i)
	{
		j=i*i;
		d[j]+=1;
		j+=i;
		for(;j<=maxd;j+=i) d[j]+=2;
	}

	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",d[n]);
	}

	return 0;
}
