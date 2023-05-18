import java.util.Scanner;
 class solution {

	// Return a 2D array that contains all the subsets
	public static int[][] helper(int[] input, int startIndex) {
		if (input.length == startIndex) {
			int[][] output = new int[1][0];
			return output;
		}
		int[][] smallerOutput = helper(input, startIndex + 1);	
		int[][] output = new int[2 * smallerOutput.length][];
		int k = 0;
		for (int i = 0; i < smallerOutput.length; i++) {
			output[k] = new int[smallerOutput[i].length];

			for (int j = 0; j < smallerOutput[i].length; j++) {
				output[k][j] = smallerOutput[i][j];
			}
			k++;
		}
		for (int i  = 0; i < smallerOutput.length; i++) {
			output[k] = new int[smallerOutput[i].length+1];
			output[k][0] = input[startIndex];
			for (int j = 1; j<= smallerOutput[i].length;j++) {
				output[k][j] = smallerOutput[i][j - 1];
			}
			k++;
		}
		return output;
	}
	public static int[][] subsets(int input[]) {
		// Write your code here
		return helper(input, 0);
	}
}

public class runner {
	
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
		int output[][] = solution.subsets(input);
		for(int i = 0; i < output.length; i++) {
			for(int j = 0; j < output[i].length; j++) {
				System.out.print(output[i][j] + " ");
			}
			System.out.println();
		}
	}
}
