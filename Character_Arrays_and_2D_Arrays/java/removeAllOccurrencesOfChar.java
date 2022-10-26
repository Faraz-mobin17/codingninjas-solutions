import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class removeAllOccurrencesOfChar {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws NumberFormatException, IOException {
        String str = br.readLine();
        if (str != null) {
            str = str.trim();
        } else {
            str = "";
        }

        char x = br.readLine().charAt(0);

        String ans = Solution.removeAllOccurrnecesOfChar1(str, x);

        System.out.println(ans);

    }
}

class Solution {
    public static String removeAllOccurrnecesOfChar1(String str, char ch) {
        int n = str.length();
        String ans = "";
        for (int i = 0; i < n; i += 1) {
            if (str.charAt(i) != ch) {
                ans += str.charAt(i);
            }
        }
        return ans;
    }
}