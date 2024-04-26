import java.util.Scanner;
public class nqson_tinh_tong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long x = sc.nextLong();
        long[] a = new long[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextLong();
        }
        for (int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++){
                if(a[i] + a[j] == x){
                    if(a[i] < a[j]) System.out.printf(a[i] + " " + a[j]);
                    else System.out.printf(a[j] + " " + a[i]);
                    return;
                }
            }
            sc.close();
        }
    }
}