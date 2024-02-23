package Strings;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class SplitString {
    public static List<String> splitWordsBySeparator(List<String> words, char separator) {
        List<String> ans = new ArrayList<>();
        for (String word : words) {
            String[] splitWords = word.split("[" + separator + "]");
            System.out.println(Arrays.toString(splitWords));
            for (String s : splitWords) {
                if (s.length() >= 1)
                    ans.add(s);
            }
        }
        return ans;
    }

    public static void main(String... args) {
        String[] w = { "one.two.three", "four.five", "six" };
        List<String> words = new ArrayList<>();
        for (int i = 0; i < w.length; i += 1) {
            words.add(w[i]);
        }
        List<String> ans = splitWordsBySeparator(words, '.');
        System.out.println("Inside main");
        for (String x : ans) {
            System.out.print(x + " ");
        }
    }
}