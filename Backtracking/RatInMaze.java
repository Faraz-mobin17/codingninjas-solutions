package Backtracking;

import java.util.Arrays;

public class RatInMaze {
    public static void findPath(int[][] maze, int n) {
        if (n == 0)
            return;
        int[][] visited = new int[n][n];
        f(maze, visited, 0, 0, n);
    }

    public static void printVisited(int[][] visited) {
        for (int[] row : visited) {
            System.out.print(Arrays.toString(row));
        }
        System.out.println();
    }

    public static void f(int[][] maze, int[][] visited, int x, int y, int n) {
        // this func will check if direction is valid then go towards it
        visited[x][y] = 1;
        // when reached the n - 1 , n - 1
        if (x == n - 1 && y == n - 1) {
            // while backtracking mark the last visited cell to 0
            visited[x][y] = 0;
            printVisited(visited);
            return; // backtrack
        }
        // up direction
        if (isValid(maze, visited, x - 1, y, n)) {
            f(maze, visited, x - 1, y, n);
        }
        // down direction
        if (isValid(maze, visited, x + 1, y, n)) {
            f(maze, visited, x + 1, y, n);
        }
        // left direction
        if (isValid(maze, visited, x, y - 1, n)) {
            f(maze, visited, x, y - 1, n);
        }
        // right direction
        if (isValid(maze, visited, x, y + 1, n)) {
            f(maze, visited, x, y + 1, n);
        }
        // backtrack
        visited[x][y] = 0; // marking rest of the visited cell to 0
    }

    public static boolean isValid(int[][] maze, int[][] visited, int x, int y, int n) {
        if (x < 0 || x >= n || y < 0 || y >= n) // if not a valid direction
            return false;
        /*
         * if already visited or can't visit some cell here it is denoted by
         * // 0 maze[x][y] = 0
         */
        if (maze[x][y] == 0 || visited[x][y] == 1)
            return false;
        return true;
    }

    public static void main(String[] args) {
        // int[][] maze = {
        // { 1, 1, 1 },
        // { 1, 0, 1 },
        // { 1, 1, 1 }
        // };
        // findPath(maze, 3);
        int[][] maze = {
                { 1, 0, 0, 0 },
                { 1, 1, 0, 1 },
                { 1, 1, 0, 0 },
                { 0, 1, 1, 1 }
        };
        findPath(maze, 4);
        // int[][] maze = {
        // { 1, 0 },
        // { 1, 0 }
        // };
        // findPath(maze, 2);
    }
}
