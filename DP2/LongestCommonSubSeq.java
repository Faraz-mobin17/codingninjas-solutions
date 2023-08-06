import java.util.Arrays;

public class LongestCommonSubSeq {

    public static int lcs(StringBuffer x, StringBuffer y, int m, int n) {
        // base case: smallest valid input
        if (m == 0 || n == 0)
            return 0;

        // if last Char matched
        if (x.charAt(m - 1) == y.charAt(n - 1)) {
            return 1 + lcs(x, y, m - 1, n - 1);
        } else {
            return Math.max(lcs(x, y, m, n - 1), lcs(x, y, m - 1, n));
        }
    }

    public static int lcsmem(StringBuffer x, StringBuffer y, int m, int n) {
        int[][] output = new int[m + 1][n + 1];
        for (int[] row : output) {
            Arrays.fill(row, -1);
        }
        return lcsmem(x, y, m, n, output);
    }

    private static int lcsmem(StringBuffer x, StringBuffer y, int m, int n, int[][] output) {
        // baes case
        if (m == 0 || n == 0)
            return 0;

        if (output[m][n] != -1) {
            return output[m][n];
        }
        int ans = 0;
        // if last Char matched
        if (x.charAt(m - 1) == y.charAt(n - 1)) {
            ans = 1 + lcsmem(x, y, m - 1, n - 1, output);
        } else {
            ans = Math.max(lcsmem(x, y, m, n - 1, output), lcsmem(x, y, m - 1, n, output));
        }
        output[m][n] = ans;
        return ans;
    }

    public static int lcsdp(StringBuffer x, StringBuffer y, int m, int n) {
        int[][] dp = new int[m + 1][n + 1];
        // fill the first row and col
        for (int i = 0; i < m + 1; i += 1) {
            for (int j = 0; j < n + 1; j += 1) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 0;
                }
            }
        }
        // fill the rest of the boxes
        for (int i = 1; i < m + 1; i += 1) {
            for (int j = 1; j < n + 1; j += 1) {
                if (dp[i - 1] == dp[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[m][n];
    }

    public static void main(String[] args) {
        StringBuffer x = new StringBuffer("abcde");
        StringBuffer y = new StringBuffer("abcdf");

        System.out.println(lcsdp(x, y, x.length(), y.length()));
    }
}