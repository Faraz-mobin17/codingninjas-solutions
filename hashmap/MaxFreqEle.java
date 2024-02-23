package hashmap;

import java.util.HashMap;
import java.util.Map;

public class MaxFreqEle {
    

    public static int maxFrequencyNumber(int[] arr) {
        if (arr.length == 0)
            return Integer.MIN_VALUE;
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i : arr) {

            if (map.containsKey(i)) {
                map.put(i, map.get(i) + 1);
            } else {
                map.put(i, 1);
            }
        }

        int maxCount = 0;
        int number = Integer.MIN_VALUE;
        for (int i : arr) {
            if (map.get(i) > maxCount) {
                maxCount = map.get(i);
                number = i;
            }
        }
        return number;
    }

    public static void main(String[] args) {
        int[] arr = { 2, 12, 2, 11, 12, 2, 1, 2, 2, 11, 12, 2, 6 };
        int[] arr2 = { 5, 4, 3, 2, 1 };
        System.out.println(maxFrequencyNumber(arr));
        // System.out.println("Ans: " + maxFrequencyNumber(arr));
    }
}
