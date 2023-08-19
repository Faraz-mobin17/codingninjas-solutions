package hashmap;

import java.util.HashMap;
import java.util.Map;

public class UniqueChar {
    public static void f(String str) {
        HashMap<Character, Boolean> map = new HashMap<>();
        String s = "";
        for (int i = 0; i < str.length(); i += 1) {
            if (map.containsKey(str.charAt(i))) {
                continue;
            } else {
                s += str.charAt(i);
                map.put(str.charAt(i), true);
            }
        }
        System.out.println(s);
    }

    public static void main(String[] args) {
        // String str = "ababacd";
        // String str = "farazrammeghnagarima";
        String str = "codingninjas";
        // String str = "faraz";
        f(str);
    }
}
