import java.util.Scanner;
import java.util.Stack;

public class dao_tu {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.nextLine();
        Stack<String> st = new Stack<>();
        String ans = "";

        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == ' ') {
                st.push(ans);
                ans = "";
            } else {
                ans += str.charAt(i);
            }
        }
        st.push(ans);

        while (!st.empty()) {
            System.out.print(st.peek() + " ");
            st.pop();
        }

        scanner.close();
    }
}
