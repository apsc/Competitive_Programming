using System;
using System.Numerics.dll;
class Fib{
	static BigInteger b,c;
	static double inverseSqrt5 = 0.44721359549995793928183473374626;
	static double phi = 1.6180339887498948482045868343656;
	static int Fibonacci( long n) {
		b=phi;
		c=BigInteger.ModPow(b,n,10000007));
		int m=Convert.ToInt32(c.ToString());
		return  (m*inverseSqrt5 + 0.5); //(int)Math.Floor(Math.Pow(phi, n)
	}
	public static void Main(){
		int t=Convert.ToInt32(Console.ReadLine());
		while(t--!=0){
			long n=Convert.ToInt32(Console.ReadLine());
			if(n==0)Console.WriteLine(n);
			else Console.WriteLine(Fibonacci(n+2));
		}
		
	}
}