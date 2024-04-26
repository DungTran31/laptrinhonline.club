import java.util.Scanner;

public class t_prime {
    static boolean isPrime(long n) {
        if (n <= 1) {
            return false;
        }
        for (long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            long x = scanner.nextLong();
            long  sqrt_x = (long) Math.sqrt(x);
            if(sqrt_x * sqrt_x == x && isPrime(sqrt_x)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        scanner.close();
    }
}
