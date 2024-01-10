import java.util.Scanner;

public class bieu_thuc_tong {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        long res = 0;
        String[] dau = new String[100000];
        long[] so = new long[100000];

        int cnt = 0;
        StringBuilder currentNumber = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '+') {
                so[cnt] = Long.parseLong(currentNumber.toString());
                currentNumber = new StringBuilder();
                cnt++;
                continue;
            }
            currentNumber.append(s.charAt(i));
            dau[cnt] = currentNumber.toString();
        }
        so[cnt] = Long.parseLong(currentNumber.toString());
        cnt++;

        for (int i = 0; i < cnt; i++) {
            res += so[i];
        }

        System.out.println(res);
        scanner.close();
    }
}
