#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;
int height(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return (1 + max(leftHeight, rightHeight));
}
int diameter(Node *root)
{
    if (root == nullptr)
        return 0;
    int option1 = height(root->left) + height(root->right);
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);
    return max(option1, max(option2, option3));
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
    diameter(root);
    delete root;
    return 0;
}