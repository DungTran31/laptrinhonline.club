import java.util.Scanner;

public class Huaauhahhuahau {

	public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String x = scanner.next();
        char[] y = new char[60];
        int j = 0;

        for (int i = 0; i < x.length(); i++) {
            char ch = x.charAt(i);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                y[j] = ch;
                j++;
            }
        }
        y[j] = '\0';

        int lnth = j;
        boolean isPalindrome = true;
        for (int i = 0, k = lnth - 1; i < lnth; i++, k--) {
            if (y[i] != y[k]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome) {
            System.out.println("S");
        } else {
            System.out.println("N");
        }
        scanner.close();
    }
}
