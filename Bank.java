import java.util.*;
public class Bank{
	String name;
	int age;
	int bal;
	String []acc = {"Savings","Current","Fixed Deposit","Recuring"};
	int p;
	
	public int nameCheck(String a)
	{
		int flag=0;
		for(int i=0;i<a.length();i++)
		{
			if(!(a.charAt(i)>=65 && a.charAt(i)<=90 || a.charAt(i)>=97 && a.charAt(i)<=122 || a.charAt(i)==32))
			flag=1;
		}
		return flag;
	}
	
	public void getInformation()
	{	
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Please enter the information as below");
		System.out.print("Name:");
		name=sc.nextLine();
		int q=nameCheck(name);
		while(q==1)
		{
		
			System.out.println("\nInvalid Characters used.\nPlease use only alphabets!");
			System.out.print("Name:");
			name=sc.nextLine();
			q=nameCheck(name);
		}
		System.out.print("Age:");
		age=Integer.parseInt(sc.nextLine());
		
		if(age<18)
		{
			System.out.println("Sorry,you must be 18 or above to use our bank's facilities...\nCome after "+(18-age)+" years\nThankyou.");
			System.exit(1);
		}
		if(age>100)
		{
			System.out.println("Invalid age,RIP");
			System.exit(1);
		}
		System.out.println("\n\nPlease choose your account type from the following:\n1.Savings\n2.Current\n3.Fixed Deposit\n4.Recurring \nPress 1,2,3or4");
		p=Integer.parseInt(sc.nextLine());
		
		System.out.print("\nPlease enter the initial balance of your account in Rupees:");
		bal=Integer.parseInt(sc.nextLine());
		while(bal<200)
		{
			System.out.print("\nSorry your balance must be greater than or equall to Rs.200\nEnter again:");
			bal=Integer.parseInt(sc.nextLine());
		}
	}
	
	public void menu()
	{	
		int temp1=0;
		Scanner sc=new Scanner(System.in);
		int temp2=0;
		while(true)
		{
			System.out.println("\n\nPlease choose from the following facilities:\n1.Deposit\n2.Withdraw\n3.Account Details\n4.Exit");
			temp1=Integer.parseInt(sc.nextLine());
			
			switch(temp1)
			{
				case 1:
					System.out.print("\nEnter the amount in Rupees you want to deposit:");
					temp2=Integer.parseInt(sc.nextLine());
					bal+=temp2;
					System.out.println("Transaction Successfull,Your current balance is: "+bal);
					break;
				case 2:
					System.out.println("\nEnter the amount you want to withdraw from your account:");
					temp2=Integer.parseInt(sc.nextLine());
					
					while(bal-temp2<200)
					{
						System.out.print("Sorry transaction insuccessful due to insufficient funds in your account.\nPlease try again:");
						temp2=Integer.parseInt(sc.nextLine());
					}
					bal-=temp2;
					System.out.println("Transaction Successfull,Your current balance is: "+bal);
					break;
				case 3:
					System.out.println("\nYour Account details are as follows:\nName: "+name+"\nAge: "+age+"\nAccount Type: "+acc[p]+"\nBalance: "+bal);
					break;
			
				case 4:
					System.out.println("\nThank you, for using our services\nHave a nice day!");
					return;
							
		}	}
	}
		public static void main(String args[])
	{
		Bank obj=new Bank();
		obj.getInformation();
		obj.menu();
	}
}