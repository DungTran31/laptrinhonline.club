import java.util.Scanner;

public class chuoi_vuong {
    static boolean isPerfectSquare(String s) {
        int n = s.length();
        if (n % 2 == 1) {
            return false;
        }
        n /= 2;
        String l = s.substring(0, n);
        String r = s.substring(n);
        return l.equals(r);
    }

    static void sol() {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); // Read the number of test cases t.

        while (t-- > 0) {
            String s = scanner.next(); // Read the string from input.

            if (isPerfectSquare(s)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        scanner.close();
    }

    public static void main(String[] args) {
        sol();
    }
}
