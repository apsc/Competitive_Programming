#include<cstdio>
using namespace std;

#define MAX 100000000
#define LMT 10000
#define LEN 6000000

#define chk(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define set(n) (flag[n>>6]|=(1<<((n>>1)&31)))
#define sq(x) ((x)*(x))

unsigned flag[MAX/64];
unsigned prime[LEN];
unsigned primelen;

void sieve()
{
	unsigned i, j, k;
	for(i=3; i<LMT; i+=2)
		if(!chk(i))
			for(j=i*i,k=i<<1; j<MAX; j+=k)
				set(j);
	prime[(j=0)++] = 2;
	for(i=3; i<MAX; i+=2)
		if(!chk(i))
			prime[j++] = i;
	primelen = j;
}

int main()
{
	sieve();
	int n,i;
	freopen("sieve.txt","r",stdin);
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;++i) printf("%d\n",prime[i]);
	}
	return 0;
}
