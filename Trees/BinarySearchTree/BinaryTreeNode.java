public class BinaryTreeNode {
    Node root;

    private static class Node {
        int data;
        Node left, right;

        public Node(int data) {
            this.data = data;
            left = null;
            right = null;
        }
    }

    private boolean hasData(int data, Node root) {
        if (root == null)
            return false;
        if (root.data == data)
            return true;
        else if (root.data < data) {
            return hasData(data, root.left);
        } else {
            return hasData(data, root.right);
        }
    }

    public boolean hasData(int data) {
        return hasData(data, root);
    }

    public Node insert(int data, Node root) {
        Node newNode = new Node(data);
        if (root == null) {
            root = newNode;
            return root;
        }
        if (data <= root.data) { // handling duplicate data
            root.left = insert(data, root.left);
        } else
            root.right = insert(data, root.right);
        return root;
    }

    public void insert(int data) {
        this.root = insert(data, this.root);
    }

    public Node remove(int data, Node root) {
        if (root == null)
            return null;
        // case 1
        if (data > root.data) {
            root.right = remove(data, root.right);
        } else if (data < root.data) {
            root.left = remove(data, root.left);
        } else {
            if (root.left == null && root.right == null) {
                root = null;
                return root;
            } else if (root.left == null) {
                return root.right;
            } else if (root.right == null) {
                return root.left;
            } else {
                Node minNode = root.right;
                while (minNode.left != null) {
                    minNode = minNode.left;
                }
                int rightMinSide = minNode.data;
                root.data = rightMinSide;
                root.right = remove(rightMinSide, root.right);
                return root;
            }
        }
        return root;
    }

    public void remove(int data) {
        this.root = remove(data, this.root);
    }

    public void printTree(Node root) {
        if (root == null)
            return;
        System.out.print(root.data + ":");
        if (root.left != null) {
            System.out.print("L:" + root.left.data);
        }
        if (root.right != null) {
            System.out.print("R:" + root.right.data);
        }
        System.out.println();
        printTree(
                root.left);
        printTree(root.right);
    }

    public static void main(String[] args) {

    }
}