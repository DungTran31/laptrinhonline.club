package OLP3;

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class chu_cai_thieu {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String x = scanner.nextLine();

        // Create a set to store lowercase letters
        Set<Character> ans = new HashSet<>();

        // Add lowercase letters to the set
        for (char c = 'a'; c <= 'z'; c++) {
            ans.add(c);
        }

        // Remove whitespace and lowercase letters present in the string x
        for (char c : x.toCharArray()) {
            if (c != ' ') {
                ans.remove(Character.toLowerCase(c));
            }
        }

        // Print lowercase letters not present in string x
        for (char c : ans) {
            System.out.print(c);
        }
        System.out.println();
        scanner.close();
    }
}
