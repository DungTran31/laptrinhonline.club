import java.util.Scanner;

public class diem_bat_dong {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[n];
        int res = 0;

        for(int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
            if(a[i] == i) {
                res++;
            }
        }
        System.out.println(res);
        scanner.close();
    }
}
