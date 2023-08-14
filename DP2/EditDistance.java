import java.util.Arrays;

public class EditDistance {
    public static int editDistance(String str1, String str2) {
        if (str1.length() == 0 || str2.length() == 0) {
            return Math.max(str1.length(), str2.length());
        }
        if (str1.charAt(0) == str2.charAt(0)) {
            return editDistance(str1.substring(1), str2.substring(1));
        } else {
            // insert
            int a = 1 + editDistance(str1.substring(1), str2);
            // Delete
            int b = 1 + editDistance(str1, str2.substring(1));
            int c = 1 + editDistance(str1.substring(1), str2.substring(1));
            return Math.min(a, Math.min(b, c));
        }
    }

    public static int editDistanceMem(String str1, String str2) {
        int[][] dp = new int[str1.length() + 1][str2.length() + 1];
        for (int[] row : dp) {
            Arrays.fill(row, -1);
        }
        return editDistanceHelper(str1, str2, 0, 0, dp);
    }

    private static int editDistanceHelper(String str1, String str2, int i, int j, int[][] dp) {
        if (i == str1.length()) {
            return str2.length() - j;
        }
        if (j == str2.length()) {
            return str1.length() - i;
        }

        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        int result;
        if (str1.charAt(i) == str2.charAt(j)) {
            result = editDistanceHelper(str1, str2, i + 1, j + 1, dp);
        } else {
            int insert = 1 + editDistanceHelper(str1, str2, i, j + 1, dp);
            int delete = 1 + editDistanceHelper(str1, str2, i + 1, j, dp);
            int replace = 1 + editDistanceHelper(str1, str2, i + 1, j + 1, dp);

            result = Math.min(insert, Math.min(delete, replace));
        }

        dp[i][j] = result;
        return result;
    }

    // public static int editDistanceDP(String str1, String str2) {
    // int[][] dp = new int[str1.length() + 1][str2.length() + 1];
    // // convert base case
    // for (int i = 0; i <= str1.length(); i += 1) {
    // // 1st base case
    // dp[i][0] = i;
    // }
    // for (int j = 1; j <= str2.length(); j += 1) {
    // // 2nd base case
    // dp[0][j] = j;
    // }
    // }

    public static void main(String[] args) {
        String str1 = "abc";
        String str2 = "cba";

        System.out.println(editDistanceMem(str1, str2));
    }
}
