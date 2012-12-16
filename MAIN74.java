import java.util.*;
import java.math.BigDecimal;
class MAIN74{
	static BigDecimal b,c,d;
	static double inverseSqrt5 = 0.44721359549995793928183473374626;
	static double phi = 1.6180339887498948482045868343656;
	static int Fibonacci( long n) {
		b=BigDecimal.valueOf(phi);
		c=b.pow((int)n);
		d=c.remainder(BigDecimal.valueOf(10000007));
		int m=d.intValue();
		return  ((int)(m*inverseSqrt5 + 0.5)); //(int)Math.Floor(Math.Pow(phi, n)
	}
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int t=Integer.parseInt(sc.nextLine());
		while(t--!=0){
			long n=Integer.parseInt(sc.nextLine());
			if(n==0)System.out.println(n);
			else System.out.println(Fibonacci(n+2));
		}
	}
}

