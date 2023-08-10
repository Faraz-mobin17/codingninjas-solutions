public class EditDistance {
    public static int editDistance(String str1, String str2) {
        if (str1.length() == 0 || str2.length() == 0) {
            return Math.max(str1.length(), str2.length());
        }
        if (str1.charAt(0) == str2.charAt(0)) {
            return editDistance(str1.substring(1), str2.substring(1));
        } else {
            // insert
            int a = 1 + editDistance(str1.substring(1), str2);
            // Delete
            int b = 1 + editDistance(str1, str2.substring(1));
            int c = 1 + editDistance(str1.substring(1), str2.substring(1));
            return Math.min(a, Math.min(b, c));
        }
    }

    public static void main(String[] args) {
        String str1 = "abc";
        String str2 = "acb";

        System.out.println(editDistance(str1, str2));
    }
}
