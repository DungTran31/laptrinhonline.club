import java.util.Scanner;

public class tuoi_trung_binh {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int s = 0, d = 0;

        while (true) {
            int u = scanner.nextInt();
            if (u < 0) {
                break;
            } else {
                s += u;
                d++;
            }
        }

        System.out.printf("%.2f", (float) s / d);
        scanner.close();
    }
}
