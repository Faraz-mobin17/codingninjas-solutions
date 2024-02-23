package hashmap;

import java.util.HashMap;
import java.util.Map;

public class Intersection {

    public static void printIntersection(int[] arr1, int[] arr2) {
        if (arr1.length == 0 || arr2.length == 0)
            return;

        HashMap<Integer, Integer> map1 = new HashMap<>();
        HashMap<Integer, Integer> map2 = new HashMap<>();

        for (int i : arr1) {
            map1.put(i, map1.getOrDefault(i, 0) + 1);
        }

        for (int i : arr2) {
            map2.put(i, map2.getOrDefault(i, 0) + 1);
        }

        System.out.println(map1.toString());
        System.out.println(map2.toString());

        for (Map.Entry<Integer, Integer> entry : map1.entrySet()) {
            int value1 = entry.getValue();
            int value2 = map2.getOrDefault(entry.getKey(), 0);
            // System.out.print("Value 1: " + value1);
            // System.out.print(", Value 2: " + value2);
            int times = Math.min(value1, value2);
            for (int i = 0; i < times; i++) {
                System.out.println(entry.getKey());
            }
        }
    }

    public static void main(String[] args) {
        int[] arr1 = { 2, 6, 8, 5, 4, 3 };
        int[] arr2 = { 2, 2, 2, 3, 4, 7 };
        printIntersection(arr1, arr2);
    }
}
