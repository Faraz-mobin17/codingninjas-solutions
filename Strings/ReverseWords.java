package Strings;

import java.util.Arrays;

public class ReverseWords {
    public static String reverseWords(String s) {
        String[] strArr = s.split(" ");
        StringBuilder str = new StringBuilder();

        for (int i = 0; i < strArr.length; i++) {
            String word = strArr[i];
            StringBuilder reversedWord = new StringBuilder(word).reverse();
            str.append(reversedWord);
            if (i < strArr.length - 1) {
                str.append(" ");
            }
        }

        return str.toString();
    }

    public static void main(String[] args) {
        String s = "Let's take LeetCode contest";
        System.out.println(reverseWords(s));
    }
}
