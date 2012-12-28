long long modexp(long long a, long long b, long long n)
{
            long long d=1;
            while(b!=0)
            {
                       if(b&1)
                         d=mul(d,a,n);
                             a=mul(a,a,n);
                       b=b>>1;
                       }
return (d%n);
                       }
long long mul(long long a,long long b,long long n){
    long long x = 0,y=a%n;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%n;
        }
        y = (y*2)%n;
        b /= 2;
    }
    return x%n;
}
// etf + lcmsum   formula=sum=(1+ret[n])*n/2;
    void cal_etf()
       {
          for(int i=1 ;i<=Lim ; i++ ) etf[i]=i;
          for(int i=2 ; i<= Lim ; i++ )
            if ( etf[i] == i)
              for(int j=2*i;j<=Lim;j += i) etf[j] -=  etf[j]/ i ;
          for(int i=2;i<= Lim;i++) if ( etf[i]==i) etf[i]=i-1;
	  for(int i=1;i<=Lim;i++) for (int j=i;j<=Lim;j += i  ) ret[j]+= i*etf[i];
       }
