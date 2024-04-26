import java.util.Scanner;
import java.util.Stack;

public class dao_mang_ky_tu {
    public static void main(String[] args){
		Stack<Character> st = new Stack<>();
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		String s=sc.next();
		for(int i=0;i<n;i++){
			st.push(s.charAt(i));
		}
		while(!st.empty()){
			System.out.printf("%c", st.peek());
			st.pop();
		}
		sc.close();
	}
}
