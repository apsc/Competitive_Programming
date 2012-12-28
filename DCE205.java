import java.util.*;

class DCE205{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int t=Integer.parseInt(sc.nextLine());
		for(;t>0;t--){
			int n=Integer.parseInt(sc.nextLine());
			int noj=0,nos=0;
			for(int i=0;i<n;i++){
				String in=sc.nextLine();
				for(int j=0;j<in.length();j++){
					if(in.charAt(j)=='J'||in.charAt(j)=='j')noj++;
					if(in.charAt(j)=='S'||in.charAt(j)=='s')nos++;
				}
			}
			int noj2=0,nos2=0;
			for(int i=0;i<n;i++){
				String in=sc.nextLine();
				for(int j=0;j<in.length();j++){
					if(in.charAt(j)=='J'||in.charAt(j)=='j')noj2++;
					if(in.charAt(j)=='S'||in.charAt(j)=='s')nos2++;
				}
			}
			if(nos==nos2 && noj==noj2){System.out.println("YES");}
			else{System.out.println("NO");}
		}
	}
}