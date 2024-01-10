import java.util.Scanner;

public class day_tam_phan {
    public static void tamPhan(int n, int[] a, int index, int[] count) {
        if (index == n) {
            for (int i = 0; i < n; ++i) {
                System.out.print(a[i] + " ");
            }
            System.out.println();
            count[0]++;
            return;
        }

        for (int i = 0; i < 3; ++i) {
            a[index] = i;

            if (index > 0 && (a[index] == a[index - 1] || (a[index] + a[index - 1]) % 3 == 0))
                continue;

            tamPhan(n, a, index + 1, count);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[n];
        int[] count = { 0 };

        tamPhan(n, a, 0, count);

        System.out.println(count[0]);
        scanner.close();
    }
}
