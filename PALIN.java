import java.io.*;
class PALIN
{
	static BufferedReader br;
	static char []str;
	public static void main(String args[]){
		br=new BufferedReader(new InputStreamReader(System.in));
		int t=0,i=0,j=0,len=0,odd=0,mid=0;boolean flag=false;
		try{t = Integer.parseInt(br.readLine());}catch(Exception e){}
		String temp=null;
		str=new char[10000009];
		while(t>0){
			try{temp=br.readLine();}catch(Exception e){}
			str=(temp.toCharArray());
			len=temp.length();
			mid=(len+1)/2;
			odd=len&1;
			i=odd==1?mid-2:mid-1;
			j=mid;flag=false;
			for(;i>=0&&j<len;i--,j++){
				if(str[i] > str[j]) { str[j] = str[i]; flag = true; }
				else if(str[i]==str[j]) str[j] = str[i];
				else break;
			}
			if(!flag) makepal(mid, odd);
			System.out.println(str);
			t--;
		}
	}
	private static void makepal(int len,int odd){
		int j, i = len-1, k = (odd==1)? len-1 : len, carry = 1, a;
		for(; i>=0 || carry!=0; i--, k++)
		{
			a = (i>=0)? str[i] - (int)'0' : 0;
			str[k] = (char)((a + carry) % 10 + '0');
			carry = (a + carry) / 10;
		}
		//str[k] = 0;
		for(i=0, j=k-1; i < j; i++, j--) str[i] = str[j];
	}
}