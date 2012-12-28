#include<iostream>
using namespace std;

#define MAX 31629376
#define LMT 5624
#define LEN 1952340

#define chk(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define set(n) (flag[n>>6]|=(1<<((n>>1)&31)))
#define sq(x) ((x)*(x))

unsigned flag[MAX/64];
unsigned primes[LEN];
unsigned primelen;

void sieve()
{
	unsigned i, j, k;
	for(i=3; i<LMT; i+=2)
		if(!chk(i))
			for(j=i*i,k=i<<1; j<MAX; j+=k)
				set(j);
	primes[(j=0)++] = 2;
	for(i=3; i<MAX; i+=2)
		if(!chk(i))
			primes[j++] = i;
	primelen = j;
}
int a[2000];
int cnt=0;
void factor(long long int n)
{
	int c,f=0,ct;
	for(int i=0;i<primelen && (c=primes[i])*c<=n;i++)
	{
		if(n%c==0)
		{
			ct=0;
			while(n%c==0)
			{
				ct++;
				n/=c;
			}
		//	if(f) printf(" %d^%d",c,ct);
		//	else printf("%d^%d",c,ct);
	//		f=1;
	a[cnt++]=c;
		}		
	}
	if(n>1) a[cnt++]=n;
}

int main()
{
	long long int n,i;
	sieve();
	while(scanf("%lld",&n)!=EOF)
	{
		if(n==0) break;
		factor(n);
		for(i=0;i<cnt;++i)
		printf("%d ",a[i]);
		cnt=0;
		printf("\n");
	}
	return 0;
}
