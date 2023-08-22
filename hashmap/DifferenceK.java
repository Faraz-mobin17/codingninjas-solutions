package hashmap;

import java.util.HashMap;
import java.util.Map;

public class DifferenceK {
    public static int getPairsWithDifferenceK(int arr[], int k) {
        Map<Integer, Integer> frequencyMap = new HashMap<>();
        int pairCount = 0;

        for (int i : arr) {
            int p1 = i + k;
            int p2 = i - k;

            if (frequencyMap.containsKey(p1)) {
                pairCount += frequencyMap.get(p1);
            }
            if (frequencyMap.containsKey(p2) && k != 0) {
                pairCount += frequencyMap.get(p2);
            }

            frequencyMap.put(i, frequencyMap.getOrDefault(i, 0) + 1);
        }

        return pairCount;
    }

    public static void main(String[] args) {
        // int[] arr = { 5, 1, 2, 4 };
        int[] arr = { 4, 4, 4, 4 };
        int k = 0;
        // int[] arr = { 2, 4, 6, 8 };
        // int k = 2;
        // int[] arr = { 2, -1, 3, 5, 6, 0, -1, 2, 6 };
        // int k = 3;
        // int[] arr = { 8, 12, 16, 4, 0, 20 };
        // int k = 4;
        System.out.println(getPairsWithDifferenceK(arr, k));
    }
}
