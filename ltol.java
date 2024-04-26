import java.util.Scanner;

public class ltol {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for (int i = 1; i <= n; i++) {
            if(i%2==1) System.out.print(i);
            else if(i%2==0){
                System.out.print("L");
                if(i%4==0) {
                    System.out.print("T");
                    if(i%8==0){
                        System.out.print("O");
                        if (i%16==0) {
                            System.out.print("L");
                        }
                    }
                }
            }
            System.out.println();
        }
        scanner.close();
    }
}
