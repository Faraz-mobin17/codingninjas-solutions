package Strings;

public class FirstOccurenceIndex {
    public static int strStr(String haystack, String needle) {
        int idx = -1;
        if (haystack.contains(needle)) {
            idx = haystack.indexOf(needle);
        }
        return idx;
    }

    public static void main(String[] args) {
        // String haystack = "sadbutsad";
        // String needle = "sad";
        String haystack = "leetcode";
        String needle = "leeto";
        System.out.println("Ans: " + strStr(haystack, needle));
    }
}
