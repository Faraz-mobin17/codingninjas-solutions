import java.util.Scanner;

public class Graph {
    public static void print(int[][] edges, int v, int startingVertex, boolean[] visited) {
        System.out.println(startingVertex);
        visited[startingVertex] = true;
        for (int i = 0; i < v; i += 1) {
            if (i == startingVertex)
                continue;
            if (edges[startingVertex][i] == 1) { // if edges exists from starting vertex then proceed
                if (visited[i])
                    continue;
                print(edges, v, i, visited);
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int v = scanner.nextInt(); // no. of vertices
        int e = scanner.nextInt(); // no. of edges

        int[][] edges = new int[v][v]; // using matrix adjency method

        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                edges[i][j] = 0; // placing 0 at matrix 0 means no edge 1 means edge
            }
        }

        for (int i = 0; i < e; i++) {
            int f = scanner.nextInt(); // ex: 2
            int s = scanner.nextInt(); // ex: 1
            // 1 <-> 2
            edges[f][s] = 1;
            edges[s][f] = 1;
        }
        boolean[] visited = new boolean[v];
        // Rest of your code
        print(edges, v, 0, visited);
    }
}
