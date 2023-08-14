package hashmap;

import java.util.HashMap;

public class Basics {
    public static void main(String[] args) {
        // HashMap<String, Integer> map = new HashMap<>();
        // map.put("One", 1);
        // map.put("Two", 2);
        // map.put("Three", 3);

        // System.out.println(map.get("One"));
        // System.out.println(map.containsKey("Two"));

        // System.out.println("================================");

        // HashMap<Integer, Integer> hm = new HashMap<>();
        // hm.put(1, 1);
        // hm.put(2, 2);
        // hm.put(3, 2);
        // hm.put(3, 3);
        // hm.put(3, 2);
        // hm.put(4, 99);
        // hm.put(5, hm.get(3) + 1);
        // System.out.println(hm.get(4) + 1);
        // System.out.println(hm.containsKey(3));
        // System.out.println(hm.get(5));
        // System.out.println(hm.toString());

        System.out.println("================================");

        HashMap<Integer, Integer> nodes = new HashMap<>();

        int[] arr = { 1, 2, 3, 2, 4, 5, 3, 3, 3 };
        for (int i : arr) {
            if (nodes.containsKey(i)) {
                System.out.print("Inside if Contains: ");
                System.out.print(i + " " + (nodes.get(i) + 1));
                System.out.println();
                nodes.put(i, nodes.get(i) + 1);
            } else {
                System.out.println("Inside else");
                System.out.println(i);
                nodes.put(i, 1);
            }
        }
        System.out.println(nodes.toString());
        int maxCount = 0;
        int ans = Integer.MIN_VALUE;
        for (int i : arr) {
            // System.out.print(i + " ");
            // System.out.println();
            System.out.print("Key: " + i + " Value: " + nodes.get(i));
            System.out.println();
            if (nodes.get(i) > maxCount) {
                maxCount = nodes.get(i);
                ans = i;
            }
        }
        System.out.println("Ans: " + ans);
    }
}
