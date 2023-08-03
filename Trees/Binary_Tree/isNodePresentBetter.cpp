#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;
bool isNodePresentBetter(Node *root, int x)
{
    if (root == nullptr)
        return false;
    if (root->data == x)
        return true;
    return isNodePresentBetter(root->left, x) || isNodePresentBetter(root->right, x);
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
    isNodePresentBetter(root, 3);
    delete root;
    return 0;
}