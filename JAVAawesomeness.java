import java.util.*;
class Demo{
    static void getPrice(String arr[],String q,String w){
        int i=0;
        int flag=0;
        int cntr=0;
        int cntr2=0;
        while(!(arr[i].equals("000000"))){
            StringTokenizer st=new StringTokenizer(arr[i]);
            String one=st.nextToken();
            //String two=st.nextToken();
            cntr=0;
            int m=0;
            for(;m<one.length();m++){
                if((q.charAt(m)==one.charAt(m))){cntr++;}
            }
            if(cntr==one.length()){flag=1;cntr2=i;}
            i++;
        }
        if(flag==0){System.out.println(q+" Unknown "+w+" -1.00");return;}
        
            
            StringTokenizer st=new StringTokenizer(arr[cntr2]);
            String one=st.nextToken();
            String two=st.nextToken();
            
            //if(!(q.contains(one))){System.out.println(q+" Unknown "+w+" -1.00");i++;continue;}
            if(flag==1){
                
                    StringTokenizer st1=new StringTokenizer(two,"$");
                    String three=st1.nextToken();
                    String four=st1.nextToken();
                    String five=q.substring(one.length());
                    double six=Double.parseDouble(four)/100;
                    double seven=Double.parseDouble(four)*Double.parseDouble(w)/100;
                    //System.out.println(q+" "+three+" "+five+" "+w+" "+six+" "+seven);
                    System.out.printf("%s %s %s %s %.2f %.2f\n",q,three,five,w,six,seven);

                
            }
            i++;
            
        }
        //System.out.println(i+"    "+(arr.length-1));
        //if(i==arr.length-1)System.out.println(q+" Unknown "+w+" -1.00");
        
        
    
    public static void main(String args[]){
        String a;
        Scanner sc=new Scanner(System.in);
        a=sc.nextLine();
        String arr[]=new String[100];
        int i=0;
        while(!(a.equals("000000"))){
            arr[i]=a;
            i++;
            a=sc.nextLine();
        }
        arr[i]="000000";
        String b=a=sc.nextLine();
        String arr2[]=new String[100];
        i=0;
        while(!(b.equals("#"))){
            arr2[i]=b;
            i++;
            b=sc.nextLine();
        }
        arr2[i]="#";
        i=0;
        
        while(!(arr2[i].equals("#"))){
            StringTokenizer st=new StringTokenizer(arr2[i]);
            String one=st.nextToken();
            String two=st.nextToken();
            if(one.charAt(0)!='0'){System.out.println(one+" Local "+one+" "+two+" 0.00 0.00");i++;continue;}
            getPrice(arr,one,two);
            i++;
        }
        
    }
}