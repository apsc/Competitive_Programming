import java.util.*;
import java.math.BigInteger;
import java.io.*;
class DCE204{
	static BufferedReader r;
	static BigInteger b;
	static BigInteger m=BigInteger.valueOf(1000000009);
	//static long val,a,b;
	//static BigInteger power(BigInteger a,BigInteger b){
	//    if (b==BigInteger.valueOf(1)) return a;
	//    if(b==BigInteger.valueOf(0)) return BigInteger.valueOf(1);
	//    BigInteger temp=power(a,b.divide(BigInteger.valueOf(2)));
	//    if(b.and(BigInteger.valueOf(1))==1)
	//    return temp.multiply(BigInteger.valueOf(temp));
	//    return temp.multiply(BigInteger.valueOf(temp));
	//}
	static BigInteger func(long n){
	     if(n==1||n==0||n==2)return BigInteger.valueOf(1);
	     if(n<5)return BigInteger.valueOf(3);
	     if(n<7)return BigInteger.valueOf(8);
	     if(n<=10)return BigInteger.valueOf(15);
	     else {
			b=BigInteger.valueOf(2*(int)ceil(n/4));
			b.multiply(BigInteger.valueOf(func((int)ceil(n/5))));
			b.multiply(BigInteger.valueOf(func((int)ceil(n/10))));
		}
	}


	public static void main(String args[]){
		int t=0;
    		long n=0;
    		r=new BufferedReader(new InputStreamReader(System.in));
		try{t=Integer.parseInt(r.readLine());}catch(Exception e){}
    		for(;t>0;t--){
                  try{n=Long.parseLong(r.readLine());}catch(Exception e){}
                  //val=func(n);
		  BigInteger c=BigInteger.valueOf(func(n));
		  BigInteger a=c.multiply(5);
                  BigInteger b=a.subtract(c);
                  //printf("%lld %lld",a,b);
                  BigInteger max=BigInteger.valueOf(0);
                  //if(power(a,b)>power(b,a)){max=power(a,b);}
                  //max=b.pow();
		a=a.mod(m);b=b.mod(m);
		max=b.pow(a.intValue());
                  max=max.mod(m);
			
                  System.out.println(max);
                 
    }
	}


}