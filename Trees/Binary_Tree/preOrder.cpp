#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;
void preOrder(Node *root)
{
    // Write your code here
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
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
    preOrder(root);
    delete root;
    return 0;
}