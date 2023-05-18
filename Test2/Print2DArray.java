import java.util.Scanner;
public class solution {
	public static void print2DArray(int input[][]) {
		// Write your code here
		Scanner sc = new Scanner(System.in);
		int m = input.length;
		int n = input[0].length;
		for (int i = 0; i < m; i += 1) {
			int count = m - i;
			while (count != 0) {
				for (int j = 0; j < n; j += 1) {
					System.out.print(input[i][j] + " ");
				}
				count--;
				System.out.println();
			}
		}
	}
}