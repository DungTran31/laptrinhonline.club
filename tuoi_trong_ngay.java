import java.util.Scanner;

public class tuoi_trong_ngay {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int nam = n/365;
        System.out.println(nam + " nam");
        int thang = (n-365*nam)/30;
        System.out.println(thang + " thang");
        int ngay = (n-365*nam-30*thang);
        System.out.println(ngay + " ngay");
        scanner.close();
    }
    
}