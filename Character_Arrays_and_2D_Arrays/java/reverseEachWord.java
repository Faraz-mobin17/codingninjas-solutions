import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class reverseEachWord {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws NumberFormatException, IOException {
        String str = br.readLine();
        if (str != null) {
            str = str.trim();
        } else {
            str = "";
        }

        String ans = Solution.reverseEachWord(str);

        System.out.println(ans);

    }
}

class Solution {
    private static String reverseWord(String str, int start, int end) {
        String reverse = "";
        while (start < end) {
            reverse = str.charAt(start) + reverse;
            ++start;
        }
        return reverse;
    }

    public static String reverseEachWord(String str) {
        int n = str.length();
        int previousSpaceIndex = -1;
        String ans = "";
        int i = 0;
        for (; i < n; i++) {
            if (str.charAt(i) == ' ') {
                ans += (reverseWord(str, previousSpaceIndex + 1, i) + " ");
                previousSpaceIndex = i;
            }
        }
        ans += (reverseWord(str, previousSpaceIndex + 1, i) + " ");
        return ans;
    }

}