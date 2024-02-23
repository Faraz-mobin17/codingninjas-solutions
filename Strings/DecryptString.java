package Strings;

import java.util.Arrays;

public class DecryptString {
    public static String freqAlphabets(String s) {
        String[] str = s.split("#");
        System.out.print(Arrays.toString(str));
        return "";
    }

    public static void main(String[] args) {
        // String s = "10#11#12#";
        String s = "1326#";
        System.out.println(freqAlphabets(s));
    }
}