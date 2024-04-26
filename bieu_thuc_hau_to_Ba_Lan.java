import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.Stack;

public class bieu_thuc_hau_to_Ba_Lan {
    static Map<Character, Integer> UT = new HashMap<>();

    static {
        UT.put('(', 0);
        UT.put('+', 1);
        UT.put('-', 1);
        UT.put('*', 2);
        UT.put('/', 2);
    }

    public static int kq(int a, int b, char c) {
        if (c == '+') return a + b;
        if (c == '-') return a - b;
        if (c == '*') return a * b;
        return a / b;
    }

    public static String Balan(String in) {
        String out = "";
        Stack<Character> S = new Stack<>();
        for (char c : in.toCharArray()) {
            if ('0' <= c && c <= '9') {
                out += c;
            } else if (c == '(') {
                S.push(c);
            } else if (c == ')') {
                while (S.peek() != '(') {
                    out += S.peek();
                    S.pop();
                }
                S.pop(); // remove '(' from stack
            } else { // operator + - * /
                while (!S.isEmpty() && UT.get(S.peek()) >= UT.get(c)) {
                    out += S.peek();
                    S.pop();
                }
                S.push(c);
            }
        }
        while (!S.isEmpty()) {
            out += S.peek();
            S.pop();
        }
        return out;
    }

    public static int giatri(String out) {
        Stack<Integer> S = new Stack<>();
        for (char c : out.toCharArray()) {
            if ('0' <= c && c <= '9') {
                S.push(c - '0');
            } else {
                int a = S.peek();
                S.pop();
                int b = S.peek();
                S.pop();
                S.push(kq(b, a, c));
            }
        }
        return S.peek();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String in = scanner.next();
        String out = Balan(in);
        System.out.println(out);
        System.out.println(giatri(out));
        scanner.close();
    }
}
