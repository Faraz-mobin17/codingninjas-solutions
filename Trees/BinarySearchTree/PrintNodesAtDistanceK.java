
public class PrintNodesAtDistanceK {

    public static void nodesAtDistanceK(BinaryTreeNode<Integer> root, int node, int k) {
        // Your code goes here
        print(root, node, k);
    }

    private static int print(BinaryTreeNode<Integer> root, int node, int k) {
        if (root == null)
            return -1;
        if (root.data == node) {
            printNodesAtDepthK(root, k);
            return 0;
        }
        int ld = print(root.left, node, k);
        int rd = print(root.right, node, k);
        if (ld != -1) { // node found
            if (ld + 1 == k) {
                System.out.println(root.data);
            } else {
                printNodesAtDepthK(root.right, k - ld - 2);
            }
            return ld + 1;
        }

        if (rd != -1) {
            if (rd + 1 == k) {
                System.out.println(root.data);
            } else {
                printNodesAtDepthK(root.left, k - rd - 2);
            }
            return rd + 1;
        }
        return -1;
    }

    private static void printNodesAtDepthK(BinaryTreeNode<Integer> root, int k) {
        if (root == null || k < 0) {
            return;
        }

        if (k == 0) {
            System.out.println(root.data);
            return;
        }

        printNodesAtDepthK(root.left, k - 1);
        printNodesAtDepthK(root.right, k - 1);
    }
}