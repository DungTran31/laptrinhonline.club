import java.util.Scanner;

public class oc_sen {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a, b, h;
        a = scanner.nextInt();
        b = scanner.nextInt();
        h = scanner.nextInt();

        // Số ngày cần để lên đỉnh là lớn hơn hoặc bằng phần nguyên của (H - b) / (a - b)
        // và làm tròn lên bằng hàm ceil
        System.out.println((int)(Math.ceil((double)(h - b) / (a - b))));
        scanner.close();
    }
}
