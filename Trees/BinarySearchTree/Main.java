import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws NumberFormatException, IOException {
        BinaryTreeNode<Integer> root = Runner.takeInput();
        String[] target_k = Main.br.readLine().trim().split(" ");

        int target = Integer.parseInt(target_k[0].trim());
        int k = Integer.parseInt(target_k[1].trim());

        PrintNodesAtDistanceK.nodesAtDistanceK(root, target, k);
    }
}