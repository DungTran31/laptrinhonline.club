import java.util.Scanner;

public class khu_vuc_con_lai {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char c = scanner.next().charAt(0);
        int[][] a = new int[12][12];

        for (int i = 0; i < 12; i++)
            for (int j = 0; j < 12; j++)
                a[i][j] = scanner.nextInt();

        float tong = 0;
        for (int i = 1; i <= 5; i++)
            for (int j = 11 - i; j >= 0 + i; j--)
                tong += a[j][i - 1];

        if (c == 'S')
            System.out.printf("%.1f", tong);
        else if (c == 'M')
            System.out.printf("%.1f", tong / 30);

        scanner.close();
    }
}
