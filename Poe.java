import java.util.*;

public class Poe
{
	public static void main(String args[])
	{
		int a=0;
		int b=0;
		int i=0;
		int c=1;
		int p=0;
		int j=0;
		String str=null;
		boolean another=false;
		Scanner obj=new Scanner(System.in);
		do{
			a=0;
			b=0;
			i=0;
			c=1;
			p=0;
			j=0;
			System.out.print("Enter the total number of prisoners:");
			a=Integer.parseInt(obj.nextLine());
			if(a<1)
			{
				System.out.println("That's not possible!");
				return;
			}
			if(a==1)
			{
				System.out.println("Only god can save you now! RIP");
				return;
			}
			b=a;
			i=0;
			while(b!=1)
			{
				b=b/2;
				i++;
			}
	
			
				
			for(j=0;j<i;j++)
			c=c*2;
			if(a-c!=0)
			p=(a-c)*2;
			else
			p=c;
			
			System.out.println(" ");
			System.out.println("Hurry up!, Get to the "+p+" position ASAP to save your life");
			System.out.println(" ");
			System.out.println("Do you want to find another posn. for given no. of prisoners?y/n");
		
			str=obj.nextLine();
			if(str.equals("y")||str.equals("Y"))
			another=true;
			else
			another=false;
		}while(another);
	}
}

