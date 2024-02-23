package Strings;

public class CountWords {
    public static int mostWordsFound(String[] sentences) {
        int maxWordCount = 0;
        for (String s : sentences) {
            int eachWordLength = s.split(" ").length;
            if (maxWordCount < eachWordLength) {
                maxWordCount = eachWordLength;
            }
        }
        return maxWordCount;
    }

    public static void main(String[] args) {
        String[] sentences = { "alice and bob love leetcode", "i think so too", "this is great thanks very much" };
        int ans = mostWordsFound(sentences);
        System.out.println("ans: " + ans);
    }
}
