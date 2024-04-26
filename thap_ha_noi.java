import java.util.Scanner;

public class thap_ha_noi {
    static int lan = 0;

    static void thap(int n, char a, char b, char c) {
        if (n > 0) {
            thap(n - 1, a, c, b);
            lan++;
            System.out.println("Buoc" + lan + " Chuyen dia " + n + " tu " + a + " sang " + b);
            thap(n - 1, c, b, a);
        }
    }

    public static void main(String[] args) {
        char a = 'A', b = 'B', c = 'C';
        Scanner sc = new Scanner(System.in);
        int dia = sc.nextInt();
        thap(dia, a, b, c);
        sc.close();
    }
}
