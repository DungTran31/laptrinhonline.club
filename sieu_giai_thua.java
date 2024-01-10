import java.util.Scanner;

public class sieu_giai_thua {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();

        long count5, temp, x;
        count5 = 0;
        temp = 5;
        x = 5 * n - 5 * (n / 5);

        while (true) {
            count5 = 0;
            temp = 5;

            while (true) {
                long t = x / temp;
                if (t == 0) {
                    break;
                }
                count5 += t;
                temp *= 5;
            }

            if (count5 == n) {
                System.out.println(x);
                break;
            }
            x += 5;
        }
        scanner.close();
    }
}
