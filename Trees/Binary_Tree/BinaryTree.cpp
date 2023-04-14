#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
#include <climits>
class BalancedReturnType
{
public:
    int height;
    bool balanced;
    BalancedReturnType(int height, bool balanced)
    {
        this->height = height;
        this->balanced = balanced;
    }
};

Node *newNode(int data)
{
    Node *newNode = new Node(data);
    return (newNode);
}

int height(Node *root)
{
    // Write our code here
    if (root == nullptr)
        return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return 1 + max(leftHeight, rightHeight);
}

// optimized approach of isBalalnced
BalancedReturnType *isBalancedHelper(Node *root)
{
    if (root == nullptr)
    {
        return new BalancedReturnType(0, true);
    }
    BalancedReturnType *ans1 = isBalancedHelper(root->left);
    BalancedReturnType *ans2 = isBalancedHelper(root->right);
    int finalHeight = abs(ans1->height - ans2->height);
    bool flag;
    if (!(ans1->balanced) || !(ans2->balanced) || finalHeight > 1)
    {
        flag = false;
    }
    else
    {
        flag = true;
    }
    int height = 1 + max(ans1->height, ans2->height);
    return new BalancedReturnType(height, flag);
}

bool isBalanced2(Node *root)
{
    if (root == nullptr)
    {
        return true;
    }
    return isBalancedHelper(root)->balanced;
}

int main(int argc, char const *argv[])
{
    // Node *root = new Node(1);
    // Node *node1 = new Node(2);
    // Node *node2 = new Node(3);
    // Node *root = takeInput();
    // Node *root = takeInputLevelWise();
    // printTree(root);
    // int ans = numNodes(root);
    // cout << "Num of nodes: " << ans;
    // int in[] = {4, 2, 5, 1, 8, 6, 9, 3, 7};
    // int pre[] = {1, 2, 4, 5, 3, 6, 8, 9, 7};
    // Node *root = buildTree(in, pre, 9);
    // Node *root = takeInputLevelWise();
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    // printTree(root);
    // cout << "Num: " << numNodes(root) << endl;
    // inOrderTraversal(root);
    // pair<int, int> p = heightDiameter(root);
    // cout << "Height: " << p.first << endl;
    // cout << "Diameter: " << p.second << endl;
    // isBalanced(root);
    isBalanced2(root);
    delete root;
    return 0;
}
