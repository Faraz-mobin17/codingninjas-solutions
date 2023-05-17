import java.util.Scanner;

class solution {
    public static void helper(int[] input, int startIndex, int[] output) {
        if (startIndex == input.length) {
            for (int i : output) { // print the output arr
                System.out.print(i + " ");
            }
            System.out.println();
            return;
        }
        helper(input, startIndex + 1, output);
        int[] newOutput = new int[output.length + 1];
        int j = 0;
        for (; j < output.length; j += 1) {
            newOutput[j] = output[j];
        }
        newOutput[j] = input[startIndex];
        helper(input, startIndex + 1, newOutput);
    }

    public static void printSubsets(int input[]) {
        // Write your code here
        int startIndex = 0;
        int[] output = new int[0];
        helper(input, startIndex, output);
    }
}

public class PrintSubOfArray {

    public static int[] takeInput() {
        Scanner s = new Scanner(System.in);
        int size = s.nextInt();
        int arr[] = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = s.nextInt();
        }
        return arr;
    }

    public static void main(String[] args) {
        int[] input = takeInput();
        solution.printSubsets(input);
    }
}
