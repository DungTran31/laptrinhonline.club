import java.util.Scanner;

public class trang_tri_tham {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();        
        int b = scanner.nextInt();
        System.out.println((a+1)*(b+1)+1);
        scanner.close();
    }
}
