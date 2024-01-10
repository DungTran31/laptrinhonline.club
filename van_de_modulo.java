import java.math.BigInteger;
import java.util.Scanner;

public class van_de_modulo {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-- > 0) {
            String a = sc.next();
            String b = sc.next();
            String c = sc.next();

            BigInteger fi= new BigInteger(a);
            BigInteger se = new BigInteger(b);
            BigInteger m = new BigInteger(c);

            System.out.println(fi.modPow(se, m));
        }

        sc.close();
    }
}