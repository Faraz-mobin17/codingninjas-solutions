package Strings;

public class RotateString {
    public static boolean rotateString(String s, String goal) {
        String rotated = s + s;
        System.out.println(rotated);
        return rotated.contains(goal);
    }

    public static void main(String[] args) {
        String s = "abcde";
        String goal = "cdeab";
        System.out.println("Ans: " + rotateString(s, goal));
    }
}
