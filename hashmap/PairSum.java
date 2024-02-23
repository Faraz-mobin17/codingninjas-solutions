package hashmap;

import java.util.HashMap;

public class PairSum {

    public static void pairSum(int[] input, int size) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i : input) {
            map.put(i, map.getOrDefault(i, 0) + 1);
        }
        System.out.println(map);
        for (int i : input) {

            if (map.containsKey(0 - i)) {
                if (map.get(0 - i) == 0) {
                    continue;
                } else {
                    map.put(0 - i, 0);
                }
            }
        }
        System.out.println(map);
    }

    public static void main(String[] args) {
        int[] arr = { -2, -12, 2, 11, 12, -2, 1, -2, 2, -11, 12, 2, 60 };
        // int[] arr = { 2, 1, -2, 2, 3 };
        // int[] arr = { -2, 2, 6, -2, 2, -6, 3 };
        // int[] arr = { 0, 0, 0, 0, 0 };
        // System.out.println("Ans: " + PairSum(arr, arr.length));
        pairSum(arr, arr.length);
    }
}
