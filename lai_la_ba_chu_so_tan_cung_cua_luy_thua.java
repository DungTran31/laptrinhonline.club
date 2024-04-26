import java.util.Scanner;

public class lai_la_ba_chu_so_tan_cung_cua_luy_thua {
    static long mod = 1000;

    static long pow(long x, long y) {
        long res = 1;
        x %= mod;
        while (y > 0) {
            if ((y & 1) == 1) {
                res = (res * x) % mod;
            }
            y >>= 1; // y = y / 2;
            x = (x * x) % mod;
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String a = scanner.next();
        String b = scanner.next();
        
        long temp = a.charAt(a.length() - 1) - '0';
        if (a.length() >= 2) temp += (a.charAt(a.length() - 2) - '0') * 10;
        if (a.length() >= 3) temp += (a.charAt(a.length() - 3) - '0') * 100;

        long remain = 0;
        for (int i = 0; i < b.length(); i++) {
            remain = (remain * 10 + (b.charAt(i) - '0')) % mod;
        }

        long ans = pow(temp, remain);

        if (ans < 100) {
            System.out.print('0');
        }
        if (ans < 10) {
            System.out.print('0');
        }
        
        System.out.println(ans);
        scanner.close();
    }
}
