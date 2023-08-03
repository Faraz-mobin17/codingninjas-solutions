#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;
int height(Node *root)
{
    // Write our code here
    if (root == nullptr)
        return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return 1 + max(leftHeight, rightHeight);
}
bool isBalanced(Node *root)
{
    if (root == nullptr)
    {
        return true;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int finalHeight = abs(leftHeight - rightHeight);
    return finalHeight <= 1 && isBalanced(root->left) && isBalanced(root->right);
}
int main(int argc, char const *argv[])
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    isBalanced(root);
    delete root;
    return 0;
}