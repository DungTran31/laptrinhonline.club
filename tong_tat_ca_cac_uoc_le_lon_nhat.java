import java.util.Scanner;

public class tong_tat_ca_cac_uoc_le_lon_nhat {
    static long solve(long n) {
        if (n == 0) return 0;
        long res;

        if (n % 2 == 1) {
            res = (n + 1) / 2 * (n + 1) / 2;
        } else {
            res = n / 2 * n / 2;
        }

        return res + solve(n / 2);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long t = scanner.nextLong(); 
        while (t-- > 0) {        
            long a = scanner.nextLong();
            long b = scanner.nextLong();
            System.out.println(solve(b) - solve(a - 1));
        }
        scanner.close();
    }
}
