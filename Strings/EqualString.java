package Strings;

public class EqualString {
    public static boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        StringBuffer str1 = new StringBuffer("");
        StringBuffer str2 = new StringBuffer("");
        for (String ch : word1) {
            str1.append(ch);
        }
        for (String ch : word2) {
            str2.append(ch);
        }
        System.out.println(str1 + " " + str2);
        if (str1.toString().equals(str2.toString())) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        String[] word1 = { "a", "bc" };
        String[] word2 = { "ab", "c" };

        boolean ans = arrayStringsAreEqual(word1, word2);
        System.out.println("Ans: " + ans);
    }
}
