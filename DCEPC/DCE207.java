import java.util.*;
import java.io.*;
class DCE207 {
    static int p[];
	static BufferedReader r;
    static int i,cntr=1,index,index2,max,max2;
	static String a;
    public static void main(String args[]){
        //Scanner sc=new Scanner(System.in);
	int t=0;
	r=new BufferedReader(new InputStreamReader(System.in));
        try{t=Integer.parseInt(r.readLine());}catch(Exception e){}
        for(;t>0;t--,cntr++){
            //int max_occur=0;
            max=0;index=0;
            //int cnt=0;
		try{
            a=r.readLine();}catch(Exception e){}
            p=new int[30];
            
            for(i=0;i<a.length();i++){
                if(a.charAt(i)==' ')continue;
                p[(int)(a.charAt(i))-(int)'a']++;
                if(p[(int)(a.charAt(i))-(int)'a']>max){max=p[(int)(a.charAt(i))-(int)'a'];index=(int)a.charAt(i)-(int)'a';}
            }
            StringTokenizer st=new StringTokenizer(a);
            System.out.println("Case #"+cntr+":");
            
            
            while(st.hasMoreTokens()){
                String q=st.nextToken();
                max2=0;
		p=new int[30];
		index2=0;
                for(i=0;i<q.length();i++){
                    p[(int)(q.charAt(i))-(int)'a']++;
                    if(p[(int)(q.charAt(i))-(int)'a']>max2){max2=p[(int)(q.charAt(i))-(int)'a'];index2=(int)q.charAt(i)-(int)'a';}
            
                }



		int v=0;
            for(i=0;i<26;i++){
                if(p[i]==max2)v++;
            }
            if(v>1)continue;
		

		//System.out.println(index2);
                if(index2==index){System.out.println(q);}
            }
        }
    }
    
}
