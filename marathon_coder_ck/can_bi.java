package marathon_coder_ck;

import java.util.Scanner;

public class can_bi {
    static int findIterations(long n) {
        // If n = 1, no need to weigh further
        if (n == 1) {
            return 0;
        }

        // If n is even, halve it and continue finding
        if (n % 2 == 0) {
            return 1 + findIterations(n / 2);
        } else { // If n is odd, take one off and continue finding
            return 1 + findIterations((n - 1) / 2);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        long n = scanner.nextLong();

        int res = findIterations(n);

        System.out.println(res);
        scanner.close();
    }

}
