package Strings;

import java.util.*;

public class SortSentece {
    public static String sortSentence(String s) {
        StringBuffer sb = new StringBuffer();
        String[] arr = s.split(" ");
        String[] store = new String[arr.length];
        int index = 0;
        for (String str : arr) {
            index = (int) (str.charAt(str.length() - 1) - '0'); // lastchar
            store[index - 1] = str.substring(0, str.length() - 1);
        }
        for (int i = 0; i < store.length; i += 1) {
            sb.append(store[i]).append(" ");
        }
        return sb.toString().trim();
    }

    public static void main(String[] args) {
        String s = "is2 sentence4 This1 a3";
        System.out.println("Ans: " + sortSentence(s));
    }
}
