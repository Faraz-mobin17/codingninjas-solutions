package Strings;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class ArrAnagrams {

    public static List<String> removeAnagrams(String[] words) {
       
        return ans;
    }

    public static boolean isAnagram(String first, String second) {
        int[] freq = new int[256];
        for (int i = 0; i < first.length(); i += 1) {
            int ch = first.charAt(i);
            freq[ch]++;
        }
        for (int i = 0; i < second.length(); i += 1) {
            int ch = second.charAt(i);
            freq[ch]--;
        }
        boolean res = true;
        for (int i = 0; i < freq.length; i += 1) {
            if (freq[i] != 0) {
                res = false;
                break;
            }
        }
        return res;
    }

    public static void main(String[] args) {
        String[] words = { "abba", "baba", "bbaa", "cd", "cd" };
        List<String> ans = removeAnagrams(words);
        for (String x : ans) {
            System.out.println(x);
        }
    }
}
