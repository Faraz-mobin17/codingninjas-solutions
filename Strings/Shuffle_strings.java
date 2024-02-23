package Strings;

public class Shuffle_strings {

    public static String restoreString(String s, int[] indices) {
        // Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
        // Output: "leetcode"
        char[] ans = new char[s.length()];
        String res = "";
        for (int i = 0; i < s.length(); i += 1) {
            char ch = s.charAt(i);
            ans[indices[i]] = ch;
        }
        for (char ch : ans) {
            res += ch;
        }
        return res;
    }

    public static void main(String[] args) {
        // String s = "codeleet";
        // int[] indices = { 4, 5, 6, 7, 0, 2, 1, 3 };
        String s = "abc";
        int[] indices = { 0, 1, 2 };
        String ans = restoreString(s, indices);
        System.out.println(ans);
    }
}
