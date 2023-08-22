package hashmap;

import java.util.HashMap;

public class LongestSubArr {
    public static int lengthOfLongestSubsetWithZeroSum(int arr[]) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int sum = 0;
        int max = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];

            if (sum == 0) {
                max = i + 1; // Update max if the current sum is zero
            } else if (map.containsKey(sum)) {
                // If the sum is already in the map, update max

                max = Math.max(max, i - map.get(sum));

            } else {
                // Otherwise, store the sum in the map with its index
                map.put(sum, i);
            }
        }

        return max;
    }

    public static void main(String[] args) {
        int[] arr = { 6, 3, -1, 2, -4, 3, 1, -2, 20 };
        // int[] arr = { 2, -2, 0, -2, 2 };
        System.out.println("Ans: " + lengthOfLongestSubsetWithZeroSum(arr));
    }
}
