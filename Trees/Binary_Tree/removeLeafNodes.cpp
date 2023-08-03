#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;
Node *removeLeafNodes(Node *root)
{
    // Write your code here
    if (root == nullptr)
    {
        return root;
    }
    if (root->left == nullptr && root->right == nullptr)
    {
        root = nullptr;
        return root;
    }
    Node *updatedLeft = removeLeafNodes(root->left);
    Node *updatedRight = removeLeafNodes(root->right);
    root->left = updatedLeft;
    root->right = updatedRight;
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
    removeLeafNodes(root);
    delete root;
    return 0;
}