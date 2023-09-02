package Backtracking;

import java.util.*;

public class NQueens {

    public static ArrayList<ArrayList<Integer>> solveNQueens(int n) {
        // Write your code here.
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
        int[][] board = new int[n][n];
        solve(board, 0, n, ans);
        return ans;
    }

    public static void solve(int[][] board, int row, int n, ArrayList<ArrayList<Integer>> ans) {
        if (row == n) {
            // Create a list to represent the solution for this board
            ArrayList<Integer> solution = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    solution.add(board[i][j]);
                }
            }
            ans.add(solution);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (isValid(board, row, col, n)) {
                board[row][col] = 1;
                solve(board, row + 1, n, ans);
                board[row][col] = 0;
            }
        }
    }

    public static boolean isValid(int[][] board, int row, int col, int n) {
        // will check the valid pos for queens
        // check for the up
        for (int i = 0; i < n; i += 1) {
            if (board[i][col] == 1) {
                return false;
            }
        }
        // check for top left
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 1)
                return false;
        }
        // check for the top right
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 1)
                return false;
        }
        return true;
    }
}
