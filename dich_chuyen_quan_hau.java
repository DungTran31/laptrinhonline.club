import java.util.Scanner;

public class dich_chuyen_quan_hau {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            int u = scanner.nextInt();
            int v = scanner.nextInt();

            // Calculate horizontal and vertical distances
            int hor = Math.abs(x - u);
            int ver = Math.abs(y - v);

            if (hor == 0 && ver == 0) {
                System.out.println(0);
            } else if (hor == ver || hor == 0 || ver == 0) {
                System.out.println(1);
            } else {
                System.out.println(2);
            }
        }
        scanner.close();
    }
}
