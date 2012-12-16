mport java.util.*;
class Solution{
    static BufferedReader in;
	static BigInteger a,b;
	static int x,y;
	public static void main(String args[]){
	
		try{
			in=new BufferedReader(new InputStreamReader(System.in));
			int t=Integer.parseInt(in.readLine().toString());
			while(t!=0)
            {
			//String [] str=String.split(in.readLine());
            String str=(in.readLine().toString());
            StringTokenizer st=new StringTokenizer(str);
			x=Integer.parseInt(st.nextToken());
			y=Integer.parseInt(st.nextToken());
			if(y>x){System.out.println("0");continue;}
            else if(y==0||y==x){System.out.println("1");continue;}
			//x=5;y=2;
			a=BigInteger.valueOf(1);
			b=BigInteger.valueOf(1);
			for(int i=x;i>x-y;i--){
				a=a.multiply(BigInteger.valueOf(i));
			}
			for(int i=y;i>0;i--){
				b=b.multiply(BigInteger.valueOf(i));
			}
			a=a.divide(b);
			System.out.println(a);t--;
            //System.out.println("t"+t+" x"+x+" y"+y);
			}
		}catch(Exception e){}
	}
}