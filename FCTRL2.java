import java.math.BigInteger;
import java.util.*;
class Test{
    static BigInteger b;
    static long temp;
    public static void main(String args[]){
        
        Scanner sc=new Scanner(System.in);
        temp=1;
        int t=sc.nextInt();
        for(;t>0;t--){
            temp=1;
            int n=sc.nextInt();
            if(n==0 || n==1){System.out.println("1");continue;}
            if(n<=19){
                for(int i=2;i<=n;i++)
                temp*=i;
                System.out.println(temp);
                continue;
            }
            b=BigInteger.valueOf(1);
            for(int i=2;i<=n;i++)
                b=b.multiply(BigInteger.valueOf(i));
            System.out.println(b);
        }
    }

}