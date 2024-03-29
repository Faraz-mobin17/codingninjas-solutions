#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;

void mirrorBinaryTree(Node *root)
{
    // Write your code here
    if (root == nullptr)
        return;
    Node *tmpNodeLeft = root->left;
    root->left = root->right;
    root->right = tmpNodeLeft;
    mirrorBinaryTree(root->left);  // it will give you left child
    mirrorBinaryTree(root->right); // it will give you right child
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
    mirrorBinaryTree(root);
    delete root;
    return 0;
}