package Strings;

import java.util.Arrays;
import java.util.HashSet;

public class LongPressedName {
    public static boolean isLongPressedName(String name, String typed) {
        // remove duplicates
        String res = removeDuplicates(typed);
        if (res.equals(name))
            return true;
        return false;
    }

    public static String removeDuplicates(String input) {
        if (input == null) {
            return null;
        }

        StringBuilder result = new StringBuilder();
        HashSet<Character> seen = new HashSet<>();

        for (int i = 0; i < input.length(); i++) {
            char currentChar = input.charAt(i);

            // Check if the character is already seen
            if (!seen.contains(currentChar)) {
                result.append(currentChar); // Append it to the result
                seen.add(currentChar); // Mark it as seen
            }
        }

        return result.toString();
    }

    public static void main(String[] args) {
        // String name = "alex";
        // String typed = "aaleex";

        String name = "saeed";
        String typed = "ssaaedd";
        System.out.println("Ans: " + isLongPressedName(name, typed));
    }
}
