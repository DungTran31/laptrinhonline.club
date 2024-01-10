import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class giai_thua_so_lon {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        ArrayList<Integer> a = new ArrayList<>();
        a.add(1);

        for (int i = 2; i <= n; i++) {
            long carry = 0;
            for (int j = 0; j < a.size(); j++) {
                carry += a.get(j) * i;
                a.set(j, (int) (carry % 10));
                carry /= 10;
            }
            while (carry > 0) {
                a.add((int) (carry % 10));
                carry /= 10;
            }
        }

        Collections.reverse(a);
        for (int digit : a) {
            System.out.print(digit);
        }
        scanner.close();
    }
}
