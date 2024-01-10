import java.util.Scanner;

public class so_dac_biet {
    static boolean isSpeacial(int x){
        String str = String.valueOf(x);
        char first = str.charAt(0);
        char last = str.charAt(str.length() - 1);
        if(str.length() == 3 && x % (Character.getNumericValue(first) * 10 + Character.getNumericValue(last)) == 0) {
            return true;
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();

        while (n-- > 0) {
            int x = scanner.nextInt();
            if(isSpeacial(x)) System.out.println("YES");
            else System.out.println("NO");
        }
        scanner.close();
    }
}