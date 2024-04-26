import java.util.Scanner;

public class chuoi_so_n {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (true) {  
            int x = scanner.nextInt();
            if(x==0) break;
            for (int i = 1; i <= x; i++) {
                System.out.print(i + " ");
            }
            System.out.println();
        }

        scanner.close();
    }
}
