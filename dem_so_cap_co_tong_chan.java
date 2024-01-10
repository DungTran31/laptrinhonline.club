import java.util.Scanner;

public class dem_so_cap_co_tong_chan {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextInt();
        long c = 0, l = 0, kq = 0;

        for(int i=0;i<n;i++){
            long a = scanner.nextInt();
            if(a % 2 == 0) {
                c++;
            } else {
                l++;
            }
        }
        
        if(c>1) kq+=(c*(c-1)/2);
        if(l>1) kq+=(l*(l-1)/2);
        System.out.println(kq);
        scanner.close();                                            
    }
}
