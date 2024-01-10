import java.util.Scanner;

public class leo_thang {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int mod = 1000000007;

        int n = scanner.nextInt();
        long[] a = new long[n + 1];

        if (n == 1) {
            System.out.println(1);
            scanner.close();
            return;
        }
        if (n == 2) {
            System.out.println(2);
            scanner.close();
            return;
        }

        a[0] = 1;
        a[1] = 1;
        a[2] = 2;

        for (int i = 3; i <= n; i++) {
            a[i] = (a[i - 1] + a[i - 2] + a[i - 3]) % mod;
        }

        System.out.println(a[n]);
        scanner.close();
    }
}
