package Strings;

public class Accenture {
    public static String solve(String str) {
        String ans = "";
        if (str.length() == 0)
            return ans;
        for (int i = 0; i < str.length(); i += 1) {
            Character ch = str.charAt(i);
            if (Character.isUpperCase(ch)) {
                ans += Character.toLowerCase(ch);
            } else {
                ans += Character.toUpperCase(ch);
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        String str = "hiHello";
        String ans = solve(str);
        System.out.println(ans);
    }
}
